#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - a function given parameter on each element.
* @array: array
* @size: size of array
* @action: pointer function to be used.
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
                unsigned int m;
                if (array == NULL || action == NULL)
                        return;
                for (m = 0; m < size; m++)
                {
                        action(array[m]);
                }
        }
