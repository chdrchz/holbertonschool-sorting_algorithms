#include "sort.h"
#include "swap.c"
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		quick_sort_recursive(array, 0, size - 1);
	}
}
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
			print_array(array, high - low + 1);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, high - low + 1);
	return i + 1;
}
