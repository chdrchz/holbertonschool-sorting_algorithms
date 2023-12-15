#include "sort.h"

/**
 * linear_search - searches an array of ints using linear search
 *
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: On success: 1
 * On failure: -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0, i < size, i++)
	{
		if (array[i] == value)
			printf("Value: %d\n", value);
	}
	return (1);
}
