#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
		return (-1);
	
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		
		if (array[i] > value)
			right = i - 1;

		else
			left = i + 1;
	}

	return (-1);
}
