#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Animal.h"

typedef struct {
    animal_t animal;
} duck_t;

// Define a new behavior for the duck's sound
void __duck_sound(void* ptr) {
    animal_t* animal = (animal_t*)ptr;
    printf("%s: Quack\n", animal->name);
}

// Memory allocator
duck_t* duck_new() {
    return (duck_t*)malloc(sizeof(duck_t));
}

// Constructor
void duck_ctor(duck_t* duck) {
    animal_ctor((animal_t*)duck);
    strcpy(duck->animal.name, "Duck");
    // Point to the new behavior function. Overriding
    // is actually happening here.
    implement(sound_func_t, duck->animal.sound_func, __duck_sound);
}

// Destructor
void duck_dtor(duck_t* duck) {
    animal_dtor((animal_t*)duck);
}