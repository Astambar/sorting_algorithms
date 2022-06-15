#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: address of the list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *plist;
	listint_t *pTemplist;

	if (list == NULL || !*list || !(*list)->next)
		return;

	for (plist = *list; plist; plist = plist->next)
		if (plist->prev && plist->prev->n > plist->n)
		{
			pTemplist = plist;
			while (pTemplist->prev && pTemplist->prev->n > pTemplist->n)
			{
				swaps_node(pTemplist->prev, pTemplist);
				if ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
			}
		}
}

/**
 * swaps_node - function that swaps two nodes in a double linked list
 *
 * @left: address onf the left node
 * @right: address onf the right node
 *
 * Return: void
 */

void swaps_node(listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->prev = left->prev;

	right->next = left;
	left->prev = right;
}
