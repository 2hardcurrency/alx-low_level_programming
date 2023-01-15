#include "main.h"
/**
 * __print_rev_recursion - reversed string
 * @s: string
 * Return always *s
 * i
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
