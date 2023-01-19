#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the ssum of all its parameters
 * @i: int
 * @n: number of int
 * Return: int
 */

int main(void) {
	return (0);
}`
int sum_them_all(const unsigned int n, ...)
{


	va_list list;

	va_start(list, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
		(
		 sum += va_arg(list, int);
		 )
			if (n == 0)
				return (0);
	va_end(list);

	return (sum);
}

