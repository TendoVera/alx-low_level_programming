#include "main.h"

/**
 * print_last_digit - Prints last didgit
 * @n: number to be treated
 * Return: Last digit value
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
