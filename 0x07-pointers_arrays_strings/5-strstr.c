#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: input value
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			*hay++;
			*need++;
		}
			if (*need == '\0')
				return (haystack);
	}
		return (0);
}
