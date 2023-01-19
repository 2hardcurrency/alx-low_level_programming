#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: the number of parameters passed
 * @separator: separator between two numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));

	for (i < n - 1)
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}


