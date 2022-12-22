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
	char src;
	char dest;

	strcat(dest, src);
	printf("%s\n", dest);

	return (*dest);

}
