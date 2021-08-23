#ifndef CAT_H
#define CAT_H

// Forward declaration
typedef struct cat_t cat_t;
// Memory allocator

extern cat_t* cat_new();
// Constructor
extern void cat_ctor(cat_t* cat);
// Destructor
extern void cat_dtor(cat_t* cat);
// All behavior functions are inherited from the animal class.
extern cat_t* cat_new();

#endif