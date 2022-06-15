#include "sort.h"

/**
 * quick_sort - fonction qui trie un tableau d'entiers
 * par ordre croissant à l'aide de l'algorithme de tri rapide
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = (size - 1);

	if (!array || size < 2)
		return;

	bis_quick_sort(array, low, high, size);
}

/**
 * bis_quick_sort - Fonction principale pour lancer l'algo
 *
 *@array: Tableau à trier
 *@low: Premmière valeur du tableau
 *@high: Dernière valeur du tableau
 *@size: Taille du tableau
 */
void bis_quick_sort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		bis_quick_sort(array, low, pi - 1, size);
		bis_quick_sort(array, pi + 1, high, size);
	}
}

/**
 * partition - Construire la partition
 *
 *@a: tableau
 *@low: premmière valeur du tableau
 *@high: Dernière valeur du tableau
 *@size: Taille du tableau
 *Return: i
 */
int partition(int a[], int low, int high, size_t size)
{
	int i, j, pivot;

	i = low;
	pivot = a[high];

	for (j = low; j < high; j++)
		if (a[j] < pivot)
		{
			if (i != j)
			{
				swap(&a[i], &a[j]);
				print_array(a, size);
			}
			i++;
		}
	if (a[high] < a[i])
	{
		swap(&a[i], &a[high]);
		print_array(a, size);
	}
	return (i);
}

/**
 * swap - Fonction qui échange les deux numéros
 *
 *@a: Premier numéro à échanger
 *@b: Second numéro à échanger
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
