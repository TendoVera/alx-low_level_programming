#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int k;

	for (h = 0; h < 8; h++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[h][k]);
		_putchar('\n');
	}
}
