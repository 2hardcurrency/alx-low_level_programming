#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concats two strings
 *
 * Return: string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	l1 = strlen(s1);
	l2 = strlen(s2);

	for (i = 0; i < l2; i++)
	{
		s1[l1 + i] = s2[i];
	}

	printf("%s", s1);
}
