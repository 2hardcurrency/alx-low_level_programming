#include "main.h"
/**
 * factorial - factorial of numbers
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	int i;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
