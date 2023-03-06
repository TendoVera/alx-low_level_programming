#include "main.h"
#include <stdio.h>

/**_strchr - locates character
 * @s: input value
 * @c: character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
