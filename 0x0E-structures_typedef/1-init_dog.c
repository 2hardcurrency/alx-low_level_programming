k#include "dog.h"
/**
 * init_dog - initializing dog`s struct
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * @d: struct pointer
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d)
	{
		d->name = poppy;
		d->age = 3.3;
		d->owner = Bob;
	}
};
