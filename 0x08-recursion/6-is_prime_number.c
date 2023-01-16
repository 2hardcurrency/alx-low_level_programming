#include "main.h"
/**
 * is_prime_number - return prime numbers
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n % i != 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

