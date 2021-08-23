#ifndef DUCK_H
#define DUCK_H

// Forward declaration
typedef struct duck_t duck_t;
// Memory allocator

extern duck_t* duck_new();
// Constructor
extern void duck_ctor(duck_t* duck);
// Destructor
extern void duck_dtor(duck_t* duck);
// All behavior functions are inherited from the animal class.
extern duck_t* duck_new();

#endif