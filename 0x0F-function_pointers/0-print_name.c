#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - to write function that prints a name
 *
 * @name: arguement of the function
 * @f: pointer to the function
 *
 * Return: 0
 * /

void print_name(char *name, void (*f)(char *))
{
	void name(char *f)
	{
		_putchar("The value of f is %s", f);
	}

	char main()
	{
	 void (*f)(char) = &name;
	 (*f)(name);
	}
	
	 return (0);
}


