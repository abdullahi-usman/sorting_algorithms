#include <stdlib.h>
#include "sort.h"


/**
 * partition - The partition algorithm
 * @array: the array
 * @low: lower bounds
 * @high: high bounds
 * Return: void
*/
int partition(int *array, int low, int high)
{
	int pivot = array[high], i = low - 1, j = 0, temp;

	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			i += 1;
			temp = array[i];
			array[i] = array[j];
			array[i] = temp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	return (i + 1);
}


/**
 * sort - The partition algorithm
 * @array: the array
 * @size: the size of the array
 * @low: lower bounds
 * @high: high bounds
 * Return: void
*/

void sort(int *array, int size, int low, int high)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high);
		sort(array, size, low, pivot - 1);

		print_array(array, size);
		sort(array, size, pivot + 1, high);
		print_array(array, size);
	}
}


/**
 * quick_sort - The partition algorithm
 * @array: the array
 * @size: array size
 * Return: void
*/

void quick_sort(int *array, size_t size)
{
	sort(array, size, 0, size - 1);
	sort(array, size, 0, size - 1);
}
