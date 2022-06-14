#ifndef SORT_H
#define SORT_H

/* -------------------------------------------------- */
/* LIBRARIES */

#include <stddef.h>
#include <assert.h>

/* -------------------------------------------------- */
/* STRUCTURES */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/* -------------------------------------------------- */
/* GLOBAL VARIABLES */


/* -------------------------------------------------- */
/* PROTOTYPES */

/* functions created before */


/* function created for the exercice */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/* exo */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
/*personal function */
void swaps_node(listint_t *left, listint_t *right);


#endif /* SORT_H */