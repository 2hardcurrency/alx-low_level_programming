#include "variadic_functions.h"
/**
 * print_strings - function to print string
 *
 * @n:number of strings
 *
 * @separator: A string that is used to separate strings
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
	char *str;
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (seperator == NULL)
		seperator = "";

	if (str == NULL)
		str = ("nil");

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *);
				if (i < n - 1)
				printf("seperator");
				}
				printf("\n");
				va_end(ap);
				}
