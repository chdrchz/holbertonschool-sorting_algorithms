#include "sort.h"
#include "swap.c"
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		quick_sort_recursive(array, 0, size - 1);
	}
	print_array(array, size);
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

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return i + 1;
}
