#include "sort.h"
/**
 * selection_sort - sort array using selection sort
 * @array: pointer to an array of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int min, index;
	size_t i, j;

	if (!array || !size)
		return;
	for (j = 0; j < size; j++)
	{
		min = array[j];
		for (i = j; i < size; i++)
		{
			if (array[i] <= min)
			{
				min = array[i];
				index = i;
			}
		}
		swap_array(&array[index], &array[j], array, size);
	}
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
