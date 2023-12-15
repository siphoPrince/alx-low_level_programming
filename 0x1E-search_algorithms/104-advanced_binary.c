#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 *                   the advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++)
		printf(", %d", array[i]);
	printf("\n");
	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		return ((int)mid);
	}

	if (array[mid] < value)
	{
		if (mid % 2 == 0)
			mid++;
		result = advanced_binary(array + mid, size - mid, value);
		if (result != -1)
			return (mid + result);
	}
	return (advanced_binary(array, mid, value));
}
