#include "search_algos.h"

/**
 * linear_search -use the linear search algo to find value in array
 * @array: array to look inside of
 * @size: total size of array
 * @value: value to search for
 * Return: index of value on SUCCESS or -1 on FAILURE
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}
	for (n = 0; n <= size; n++)
	{
		if (array[n] == value)
		{
			return (array[n]);
		}
		else
		{
			printf("value checked array [%lu] = [%d]\n", n, array[n]);
		}
	}

		return (-1);
}
