#include <stdio.h>

/**
 *_strlen - return length of string
 *@s: to get length
 *Return: length
 */
int _strlen(char *s)
{
	int longt = 0;

	while (*s != '\0')
	{
		longt++;
		s++;
	}
	return (longt);
}
