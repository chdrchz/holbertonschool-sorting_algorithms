#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 *
 * @list - list to be sorted
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *next, *temp = NULL, *sorted = NULL, *current = *list;

	while (current != NULL)
	{
		next = current->next;
		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			current->prev = NULL;
			if (sorted)
				sorted->prev = current;
			sorted = current;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && temp->next->n < current->n)
				temp = temp->next;
			current->next = temp->next;
			current->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
		}
		current = next;
	}
	*list = sorted;
}
