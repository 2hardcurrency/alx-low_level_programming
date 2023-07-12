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
	size_t i, m, right, left;

	size = len
	left = 0;
	right = size - 1;


	if (array == NULL)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ")
		for (i = left; i < right; i++)
			printf("%d ", array[i]);
		printf("%d", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			left = m + 1;
		else
			right = m - 1;
	}

	return (-1);
}
