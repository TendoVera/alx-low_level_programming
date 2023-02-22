#include "main.h"

/**
 * _isalpha - check the alphabet char
 * @c: characters to be checked
 * Return: 1 for alphabet character or 0 for any other
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
