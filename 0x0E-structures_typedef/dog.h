#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>



/*
 * dog.h
 *
 * Description: This header file defines a structure,
 * struct dog,' representing essential information about
 * a dog, including its name, age, and owner. It serves
 * as a data structure to model and manage dog-related data
 * in C programs.
 *
 * struct dog
 * Task Prototypes.
*/




/**
 * struct dog - this descripction about which dog
 * @name: sdfasdf
 * @age:  asdfas
 * @owner:  asdf
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
