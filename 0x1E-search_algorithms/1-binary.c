#include <stdio.h>

/**
 * binary_search - Search for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t i = left;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);

		while (++i <= right)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
		i = left;
	}
	return (-1);
}
