#include "sort.h"
#include "swap.c"
/**
 * quick_sort - sorts an array of ints in ascending order
 *
 * @array: array of ints
 * @size: size of array
 **/
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		quick_sort_recursive(array, 0, size - 1);
	}
}

/**
 * quick_sort_recursive - recursive function for quick sort algorithim
 *
 * @array: array of ints
 * @low: lowest int
 * @high: highest int
 **/
void quick_sort_recursive(int *array, int low, int high)
{
	int partitionIndex;

	if (low < high)
	{
		partitionIndex = partition(array, low, high);
		quick_sort_recursive(array, low, partitionIndex - 1);
		quick_sort_recursive(array, partitionIndex + 1, high);
	}
}

/**
 * partition - handles the pivot point for swapping spaces in the array
 *
 * @array: array of ints
 * @low: lowest int
 * @high: highest int
 * Return: i + 1
 **/
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, high - low + 1);
	return (i + 1);
}
