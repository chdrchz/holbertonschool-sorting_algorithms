#include "sort.h"
/**
 * selection_sort - sorts integers in ascending order
 *
 * @array: array of integers
 * @size: size of array
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
				minIndex = j;
		}
		if (minIndex != i)
		{
			swap(&array[i], &array[minIndex]);
			print_array(array, size);
		}
	}
}
