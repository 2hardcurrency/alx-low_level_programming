#include "main.h"
/**
 * check - check the numbers
 * @j: int 1
 * @i: int 2
 *
 * Return: 1 or 0
 */

int check(int j, int i)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check(i + 1, j));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
