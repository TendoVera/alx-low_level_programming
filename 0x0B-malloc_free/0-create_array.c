#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: character , sch
 *
 * Return: array shown.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *sch;

	if (size == 0)
		return (NULL);

	sch = malloc(size * sizeof(char));

	if (sch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		sch[i] = c;
	}
	return (sch);
}
