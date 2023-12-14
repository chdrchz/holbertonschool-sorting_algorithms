#include "sort.h"
/**
 * bubble_sort - sorts based on the bubble sort method
 *
 * @array: array to be sorted
 * @size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		exit(EXIT_FAILURE);

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
/**
 * swap - swaps elements
 * 
 * @a: first element
 * @b: second element
 **/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
