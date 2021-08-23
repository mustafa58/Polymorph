#include <stdio.h>
#include "Animal.h"
#include "Duck.h"
#include "Cat.h"

#define new(type, ptr) type##_new(); type##_ctor(ptr)
#define del(type, ptr) type##_dtor(ptr)

int main(int argc, char ** argv)
{
    animal_t* anim = new(animal, anim);
    cat_t* cat = new(cat, cat);
    duck_t* duck = new(duck, duck);

    animal_sound(anim);
    animal_sound((animal_t*)duck);
    animal_sound((animal_t*)cat);

    del(animal, anim);
    del(duck, duck);
    del(cat, cat);

    return 0;
}