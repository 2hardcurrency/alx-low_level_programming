#include "main.h"
/**
 * _isupper - checking for uppercase char
 * @c: is the  characrter to be checked
 * Return: 1 if uppercase, otherwise, 0
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
