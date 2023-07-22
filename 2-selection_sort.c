#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: Array of integers
 * @size: Size of the array
 * 
 * Description:
 *      This function implements the Selection sort algorithm to sort an array
 *      of integers in ascending order.
 *      
 * Return:
 *      Void - The sorted array is modified in place.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int tmp; /* Temporal variable */

	if (array == NULL || size < 2)
	{
		/* If array is NULL or size is less than 2, there is nothing to sort */
		return;
	}

	for (i = 0; i < size; i++)
	{
		min_index = i;
		/* Find the minimum element in the unsorted part of the array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		/* Swap the minimum element with the first element of the unsorted part */
		if (min_index != i)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);/* Print the current state of the array */
		}
	}
}
