#include "main.h"

/**
 * print_array - print arrays of number
 * @a: array of int
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		printf("%d", a[h]);
		if (h != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
