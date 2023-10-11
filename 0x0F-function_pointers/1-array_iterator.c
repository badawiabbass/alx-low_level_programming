#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter.
 * @array: The array to work with.
 * @size: size of the array to work with.
 * @action:  is a pointer to the function you need to use
 * Return: Just Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;
	if (array && size && action)
		while (array <= end)
			action(*array++)
}
