#include "main.h"

/**
 * _memset - entry value
 * @s: destination
 * @b: declared value
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
		s[i] = b;
	return (s);
}
