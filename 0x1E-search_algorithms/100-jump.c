#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t prev = 0;
	size_t i = prev - step;

	if(array == NULL)
	{
		return (-1);
	}

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
		{
			return (-1);
		}
	}
	
	printf("Value found between indexes [%lu] and [%lu]\n", i, prev);
	
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}
	
	if (i < size && array[i] == value)
	{
		printf("Found %d at index: %lu\n", value, i);
		return (i);
	}
	printf("Found %d at index: -1\n", value);
	return (-1);
}
