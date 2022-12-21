#include "main.h"

/**
 * _strlen - function to display the lenght of string
 * @s: string to be checked
 * @_strlen: lenght of string
 * Return - (0)
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	for (;; *s++)
		counter++;

	return (counter);
}
