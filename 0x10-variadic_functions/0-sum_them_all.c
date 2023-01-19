#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the ssum of all its parameters
 * @i: int
 * @n: number of int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list list;

	va_start(list
	for (i = 0; i < n; i++)
		(
		 sum += va_arg(list, int);
		 )
			if (n == 0)
				return (0);
	va_end(list);

	return (sum);
}

