#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte
 * @n: bytes of the memory area
 *
 * @dest: destination area
 * @src: source area
 *
 * Return: copied file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
