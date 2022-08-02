#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a structure
  * @d: structure
  * @name: element 1
  * @age: element 2
  * @owner: element 3
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
