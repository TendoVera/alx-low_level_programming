#include "main.h"

/**
 * reverse_array - reverses the content of a array
 * @a: array
 * @n: number of element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int h;

	for (m = 0; m < n--; m++)
	{
		h = a[m];
		a[m] = a[n];
		a[n] = h;
	}
}
