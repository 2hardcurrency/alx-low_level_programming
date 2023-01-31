#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates array of char
 * @size: number of char
 * @c: initial values
 * Return: a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int ptr, i;
char *array[i] = c;

if (size == 0)
{
	return (NULL);
}

ptr = (char *)malloc(sizeof(char) * size);

if (array == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
