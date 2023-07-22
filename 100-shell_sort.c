#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 * @array: Array of integers
 * @size: Size of the array
 *
 * Description:
 *      This function implements the Shell sort algorithm to sort an array
 *      of integers in ascending order.
 *
 * Return:
 *      Void - The sorted array is modified in place.
 */
void shell_sort(int *array, size_t size)
{
	size_t i, space = 1, j;
	int tmp; /*tmporal variable for swap*/

	if (!array || size < 2)
		/* If array is NULL or size is less than 2, there is nothing to sort */
		return;

	 /* Initialize the gap (distance between elements to be compared) */
	while (space < size / 3)
	{
		space = space * 3 + 1;
	}

	while (space > 0)
	{
		/* Perform insertion sort with the current gap */
		for (i = space; i < size; i++)
		{
			tmp = array[i];
			/* Shift elements to create the right gap for insertion */
			for (i = space; i < size; i += 1)
			{
				tmp = array[i];

				j = i;
				while (j >= space && array[j - space] > tmp)
				{
					array[j] = array[j - space], j -= space;
				}
				array[j] = tmp;
			}
		}
		print_array(array, size), space = (space - 1) / 3;
	}
}
