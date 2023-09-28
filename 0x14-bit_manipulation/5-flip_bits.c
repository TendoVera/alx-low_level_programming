#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @m: number 2.
 * @n: first num.
 * Return: cou.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i =  0;
	int cou = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;

		if (curr & 1)
			cou++;
	}

	return (cou);
}
