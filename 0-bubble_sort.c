#include "sort.h"
/**
 * bubble_sort - sort using bubble sort algorithm
 * @array: pointer to an array of int
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, length = size;
	int temp, count = 0;
	
	if (array == NULL || size < 2)
		return;

	for (j = 0; j < (size - 1); j++)
	{
		for (i = 0; i < (length - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			count++;
		}
		length--;
		count++;
	}
	printf("count %d\n", count);
}

