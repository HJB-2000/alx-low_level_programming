#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/*
 * struct dog - this descripction about which dog
 * @name: rexi
 * @age:  twenty
 * @owner:  lexi
 *
 * Description: This header file defines a structure,'struct dog,' representing
 * essential information about a dog, including its name, age, and owner.
 * It serves as a data structure to model and manage dog-related data in
 * C programs.
 *
 * Task Prototypes
 */

struct dog/*struct dog:define a new type with the following elements */
{
	char *name;
	float age;
	char *owner;
};

#endif
