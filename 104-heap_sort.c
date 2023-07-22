#include "sort.h"

/**
 * heapify - Heapify the root element again so that we have the
 * highest element at root.
 * @array: Array of integers
 * @index: Index of the array
 * @size: Size of the array
 * 
 * Description:
 *      This function is a helper function used in the Heap Sort algorithm.
 *      It rearranges the elements in the array to maintain the heap property
 *      after the root element has been modified.
 *      
 * Return:
 *      Void - The array is modified in place.
 */
void heapify(int *array, int index, size_t size)
{
	int larg = index;
	size_t child_l = 2 * index + 1;
	size_t child_r = 2 * index + 2;

	/* Check if left child is larger than root */
	if (child_l < size && array[child_l] > array[larg])
	{
		larg = child_l;
	}

	/* Check if right child is larger than root */
	if (child_r < size && array[child_r] > array[larg])
	{
		larg = child_r;
	}

	/* If the largest element is not the root, swap them */
	if (larg != index)
	{
		swap(&array[index], &array[larg]);
		heapify(array, larg, size);
	}
}
/**
 * swap - Swap values Function
 * @a: Value
 * @b: Value
 * Return: Void - No return
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heap_sort - Sorts an array of integers in ascending
 * order using the Heap sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void heap_sort(int *array, size_t size)
{
	int i = 0;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapify(array, i, size);
		print_array(array, size);
	}

	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		/* Put root elem to get highest elem at the root again */
		heapify(array, 0, i);
		print_array(array, size);
	}
}




