#include "sort.h"
/**
 * quick_sort - sort data using quick sort algorithm
 * @array: pointer to array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_sort_recursion(array, 0, (int)(size - 1), size);
}

/**
 * quick_sort_recursion - sort the data recursively
 * @array: size of array
 * @low: begining of array
 * @high: ending of array
 * @size: size of array
 */

void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high, size);

		quick_sort_recursion(array, low, (pivot_index - 1), size);
		quick_sort_recursion(array, (pivot_index + 1), high, size);
	}
}

/**
 * partition - partition array into two
 * @array: pointer to an array
 * @low: begining of array
 * @high: ending of array
 * @size: size of array
 * Return: index of pivot element
 */

int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot_element;

	i = low;
	pivot_element = array[high];

	for (j = i; j < high; j++)
	{
		if (array[j] < pivot_element)
		{
			swap_array(&array[j], &array[i], array, size);
			i++;
		}
	}
	swap_array(&array[i], &array[high], array, size);
	return (i);
}

/**
 * swap_array - swap integers of an array
 * @i: pointer to one integer
 * @j: pointer to second
 * @array: pointer to array of integers
 * @size: size of array
 */

void swap_array(int *i, int *j, int *array, size_t size)
{
	if (*i != *j)
	{
		int tmp = *j;

		*j = *i;
		*i = tmp;
		print_array(array, size);
	}
}
