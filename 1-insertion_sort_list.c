#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: List to be sorted
 *
 * Description:
 *      This function implements the Insertion sort algorithm to sort a doubly
 *      linked list of integers in ascending order.
 *
 * Return:
 *      Void - The sorted list is modified in place.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev_node, *next_node, *tmp;

	if (!list || !*list || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		prev_node = current->prev;
		next_node = current->next;
		tmp = current;

		while (prev_node && prev_node->n > tmp->n)
		{
			prev_node->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = prev_node;

			tmp->next = prev_node;
			tmp->prev = prev_node->prev;

			if (prev_node->prev)
				prev_node->prev->next = tmp;
			else
				*list = tmp;

			prev_node->prev = tmp;
			prev_node = tmp->prev;

			print_list(*list);
		}

		current = next_node;
	}
}
