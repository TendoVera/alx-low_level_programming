#include "main.h"
/**
 * print _alphabet_x10 - Make alphabet x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char m;
	int i = 0;

	while (i <= 9)
	{
		for (m = 'a'; m<= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		i++;
	}
}
