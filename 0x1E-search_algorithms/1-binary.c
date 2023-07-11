#include <stdioo.h>
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
	int mid;
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;
		if (mid == value)
		{
			return (mid);
		}
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = array[mid] + 1;
		}
		return (-1);
	}
}