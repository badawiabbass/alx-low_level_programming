#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index -  search for an integer
 * @array: Type int array
 * @size: Type  array size
 * @cmp: Type of the compare function
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
