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
	unsigned int i;
	
	if (array != 0 && size >= 1 && action != 0)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}


