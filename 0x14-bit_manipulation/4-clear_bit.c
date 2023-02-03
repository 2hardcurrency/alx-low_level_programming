#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0
 *
 * @n: number of i
 *
 * @index: starting number
 *
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = ~(1 << index);

	*n = *n & i;

	return (1);
}
