#include "main.h"
/**
 * is_prime_number - return prime numbers
 * @n: int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n % i != 0)
	{
		return (0);
		i++;
	}
	else
	{
		return (1);
	}
}

