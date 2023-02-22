#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: Characters to be checked
 * Return: 1 for lowercase or 0 for any other
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
