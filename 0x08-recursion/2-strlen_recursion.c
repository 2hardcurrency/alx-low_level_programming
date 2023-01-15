#include "main.h"

/**
 * _strlen_recursion - calculating lenght of string
 * @s: lenght of string char
 * Return: string lenght
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		s++;
	}
	return (i);
}
