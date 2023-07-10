#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using Linear search algrithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index f the given value r -1
 */
int linear_search(int *array, size_t size, int value)
{
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
		{
			printf("%d", i);
			break;
		}
	}

	if (i == value)
	{
		return (-1);
	}
