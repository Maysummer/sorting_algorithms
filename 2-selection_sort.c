#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t minIndex, i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[minIndex] > array[j])
				minIndex = j;
		}
		if (minIndex != i)
		{
			temp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = temp;
		}
		print_array(array, size);
	}
}


