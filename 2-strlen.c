#include <stdio.h>

/**
 *_strlen - return length of string
 *@str: to get length
 *Return: lenth
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
