#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a parameter function on each element of array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}