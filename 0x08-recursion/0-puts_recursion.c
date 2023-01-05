#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: the string to be printed
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	char *s;

	if (*s)
	{
		_putchar("%s", *s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar("\n");
	}

		return (0);
};
	}
