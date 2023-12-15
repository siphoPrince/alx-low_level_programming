#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int index = 0;


	if (!array)
	{
		return (-1);
	}


	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += jump;
	}


	index -= jump;

	printf("Value found between indexes [%d] and [%d]\n", index, index + jump);


	while (index <= (index + jump) && index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
