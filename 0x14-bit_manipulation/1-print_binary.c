#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: presented number.
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int print = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			print++;
		}

		else if (print)
			_putchar('0');
	}

	if (!print)
		_putchar('0');
}
