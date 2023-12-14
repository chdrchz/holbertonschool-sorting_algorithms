#include "sort.h"
/**
 * swap - swaps two nodes
 *
 * @a: first node to be swapped
 * @b: second node to be swapped
 **/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
