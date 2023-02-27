#include "main.h"

/**
 * puts_half - half of a string
 * @str: print string
 * Return: void
 */

void puts_half(char *str)
{
	int h = 0;
	int m;

	while (str[h] != '\0')
	{
		h++;
	}
	if (h % 2 == 1)
	{
		m = (h - 1) / 2;
		m += 1;
	}
	else
	{
		m = h / 2;
	}

	for (; m < h; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
