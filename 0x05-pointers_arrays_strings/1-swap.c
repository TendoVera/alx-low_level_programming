#include <stdio.h>

/**
 * swap_int - swaps values of two numbers
 * @a: first to be swapped
 * @b: second to be swapped
 *
 * return: n
 */

void swap_int(int *a, int *b)
{
	int ten = *a;
	*a = *b;
	*b = ten;
}
