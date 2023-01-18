#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - to write function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	char print_name[20] = "name";
	printf("%s", print_name);
