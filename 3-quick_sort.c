#include "sort.h"
/**
 * partition - Lomuto partition scheme for quicksort.
 * @array: Array of integers
 * @lower: Lowest index in the array
 * @higher: Highest index in the array
 * @size: Size of the array
 *
 * Description:
 *      This function is a helper function used in the Quick Sort algorithm.
 *      It rearranges the elements in the array based on a pivot value and
 *      returns the index of the pivot after partitioning.
 *
 * Return:
 *      int - The index of the pivot after partitioning.
 */
int partition(int *array, int lower, int higher, int size)
{
	int pivot = array[higher];
	int index = lower;
	int tmp, j = 0;

	for (j = lower; j < higher; j++)
	{
		if (pivot >= array[j])
		{
			if (index != j)
			{
				tmp = array[index];
				array[index] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			index++;
		}
	}
	if (index != j)
	{
		tmp = array[index];
		array[index] = array[higher];
		array[higher] = tmp;
		print_array(array, size);
	}
	return (index);
}
/**
 * set_pivot - Function for setting the pivot using recursion
 * @array: Array of integers
 * @size: Size of the array
 * @low: Lowest index in the array
 * @high: Highest index in the array
 *
 * Description:
 *      This function is a helper function used in the Quick Sort algorithm.
 *      It sets the pivot using recursion by dividing the array into sub-arrays
 *      and selecting a new pivot for each sub-array until
 *      the entire array is sorted.
 *
 * Return:
 *      Void - The array is modified in place.
 */
void set_pivot(int *array, int low, int high, int size)
{
	int pi = 0;

	if (low < high)
	{
		/* Partition the array and get the pivot index */
		pi = partition(array, low, high, size);

		/* Recursively sort the left and right sub-arrays */
		set_pivot(array, low, pi - 1, size);
		set_pivot(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	set_pivot(array, 0, (int)size - 1, (int)size);
}
