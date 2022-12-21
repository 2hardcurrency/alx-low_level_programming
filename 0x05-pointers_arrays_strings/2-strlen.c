#include "main.h"

/**
 * _strlen - function to display the lenght of string
 * @s: String to be chkecked
 * Return: 0
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	for (; *s++;)
		counter++;

	return (counter);
}
