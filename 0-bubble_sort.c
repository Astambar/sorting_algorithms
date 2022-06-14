#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, size_j = size - 1;
	int temp_cell;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size_j; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp_cell = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp_cell;
				print_array(array, size);
			}
		}
		size_j -= 1;
	}
}
