#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != 'n')
	{
		dest++;
	}

	while (*src != 'n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 'n';
	return (s);
}

