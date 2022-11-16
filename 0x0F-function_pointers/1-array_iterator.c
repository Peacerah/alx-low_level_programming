#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to act on array
 * @array: pointer to array parameter
 * @size: size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int n;
	
	if (array != NULL)
	{
		n = size/sizeof(array[0];
		for (i = 0; i < n; ++i)
			action(array[i]);
	}
}


