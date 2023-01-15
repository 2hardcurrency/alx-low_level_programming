#include "main.h"
/**
 * _print_rev_recursion - reversed string
 * @s: string
 * Return always *s
 * i
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
