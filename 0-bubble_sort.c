#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int i, swap_number = 0;

	while(1)
	{
		for (i = 0; i < (int)size; i++)
		{
			if (i != 0 && (array[i] < array[i - 1]))
			{
				int temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;

				print_array(array, size);
				swap_number++;
			}
		}

		
		if (swap_number == 0)
			break;
		
		swap_number = 0;
	}
		
}