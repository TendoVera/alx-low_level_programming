#include "function_pointers.h"

/**
* int_index - searches for an integer, returns value.
* @array: array
* @size: number of elements in array
* @cmp: used to compare value.
* Return: m
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int m;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (m = 0; m < size; m++)
{
if (cmp(array[m]))
return (m);
}
return (-1);
}
