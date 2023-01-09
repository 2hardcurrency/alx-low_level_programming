#include "main.h"

/**
 * _islower - to write a function that checks for lowercase character.
 * @c: it is the character we are to check
 * Return: 1 if c is lowercase, else, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
