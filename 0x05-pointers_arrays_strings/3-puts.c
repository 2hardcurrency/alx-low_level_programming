#include "main.h"

/**
 * _puts - function tat prints strings
 * @str: the string to be printed`
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
