#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory for an array, using malloc.
 * @nmemb: elements of size.
 * @size: size of bytes.
 *
 * Return: m.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (m);
}
