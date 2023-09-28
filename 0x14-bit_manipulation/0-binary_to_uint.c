#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 * Return: converted number, or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int a;

	if (!b)
	  return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		return (0);
		val = 2 * val + (b[a] - '0');
	}
	return (val);
}
