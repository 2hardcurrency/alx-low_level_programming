#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenation of two strings
 * @src: source file
 * @dest: destination file
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
	}

	return (s);

}
