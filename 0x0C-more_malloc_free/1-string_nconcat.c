#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: string two.
 * @n: amount of bytes.
 *
 * Return: bytes.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int num1 = 0, num2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[num1] != '\0')
	{
		num1++;
	}

	while (s2[num2] != '\0')
	{
		num2++;
	}

	if (n > num2)
		n = num2;
	m = malloc((num1 + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);

	for (i = 0; i < num1; i++)
	{
		m[i] = s1[i];
	}

	for (; i < (num1 + n); i++)
	{
		m[i] = s2[i - num1];
	}
	m[i] = '\0';
	return (m);
}
