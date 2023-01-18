#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - function that searches for integer
  * @size: size of the array
  * @array: pointer to array
  * @cmp: pointer to the function to be used to compare values
  * Return: return the index of the first element, if no element matches return
  * -1 and if size <= 0; return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loc, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (loc = 0; loc < size; loc++)
	{
		flag = cmp(array[loc]);
		if (flag != 0)
			return (loc);
	}
	return (-1);
}


