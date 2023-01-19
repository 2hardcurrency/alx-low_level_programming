#include "variadic_function"

/**
 * sum_them_all - function that returns the ssum of all its parameters
 * @i: int
 * @n: number of int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		(
		 sum += va_arg(list, int);
		 )

	va_end(list);

	return (sum);
}

