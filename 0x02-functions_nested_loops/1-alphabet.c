#include "main.h"

/**
 * print _alphabet - put alphabet
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
