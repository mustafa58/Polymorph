#ifndef ANIMAL_H
#define ANIMAL_H

#define implement(type, name, addr) \
*(type *)&(name) = addr
// The function pointer type needed to point to
// different morphs of animal_sound
typedef void (*sound_func_t)(void*);
// Forward declaration

typedef struct {
    char* name;
    // This member is a pointer to the function which
    // performs the actual sound behavior
    const sound_func_t sound_func;
} animal_t;

extern animal_t* animal_new();
extern void animal_ctor(animal_t* animal);
extern void animal_dtor(animal_t* animal);
extern void animal_sound(animal_t* animal);

#endif