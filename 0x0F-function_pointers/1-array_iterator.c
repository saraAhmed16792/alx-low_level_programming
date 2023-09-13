#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a func given as a para on each element of []
 * @array: []
 * @size: size of printed elements
 * @action: ptr
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
