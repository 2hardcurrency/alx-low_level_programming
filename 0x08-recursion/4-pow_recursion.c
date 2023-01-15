#include "main.h"
/**
 * _pow_recursion - function that returns 'x' exponent of 'y'
 * @x: int 1
 * @y: int 2
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
	{
		return (x * (x, y - 1));
	}
	else
	{
		return (1);
	}
}
