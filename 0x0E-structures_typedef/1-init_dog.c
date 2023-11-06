#include "dog.h"

/**
 * init_dog - Breathe life into a struct dog.
 * @d: A portal to the dog's soul.
 * @name: The dog's secret name.
 * @age: The dog's timeless wisdom.
 * @owner: The guardian of the dog's essence.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

