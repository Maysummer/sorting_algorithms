#include "sort.h"

/**
 * insertion_sort_list - function that sorts a
 * doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 *
 * @list: double pointe to the list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;
	listint_t *save_next = NULL;

	if (!(*list) || !list || !current)
		return;

	current = *list;

	while (current)
	{
		previous = current->prev;
		while (previous && previous->n > current->n)
		{
			save_next = current->next;
			current->prev = previous->prev;
			(previous->prev)->next = current;
			current->next = previous;
			previous->prev = current;
			previous->next = save_next;
			save_next->prev = previous;
			print_list(*list);
			current = *list;
		}
		current = current->next;
	}
}
