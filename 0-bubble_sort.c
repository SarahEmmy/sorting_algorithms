#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Description:
 *      This function implements the Bubble sort algorithm to sort an array
 *      of integers in ascending order.
 *
 * Return:
 *      Void - The sorted array is modified in place.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp; /* Temporal variable */

	if (array == NULL || size < 2)
	{
		 /* If array is NULL or size is less than 2, there is nothing to sort */
		return;
	}

	/* Travel the array */
	for (i = 0; i < size - 1; i++)
	{
		/* loop for Compare adjacent elements*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*
			* if the number in the left is bigger than number
			* in the right swap positions
			*/
			if (array[j] > array[j + 1])
			{
				/* Swap positions */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
