#include "main.h"

/**
 * _strlen - string length returned
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
