k#include "dog.h"
/**
 * init_dog - initializing dog`s struct
 * @name: name of the struct
 *
 * @age: age of the struct
 *
 * @owner: owner of the struct
 *
 * @d: struct variable
 * Return: (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d)
	d->name = name;
	d->age = age;
	d->owner = owner;
};
