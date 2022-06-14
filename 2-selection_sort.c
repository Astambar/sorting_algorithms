#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int head = 0, tmp = 0;
	size_t i = 0, j = 0;

	if (!array || size < 2)
	{
		return;
	}
	for (; i < size; i++)
	{
		for (head = array[i], tmp = j = i + 1; j < size; j++)
			if (head > array[j])
			{
				head = array[j];
				tmp = j;
			}
		if (head != array[i])
		{
			array[tmp] = array[i];
			array[i] = head;
			print_array(array, size);
		}
	}
}
