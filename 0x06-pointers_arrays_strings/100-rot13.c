#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @d: pointer
 * Return: d
 */
char *rot13(char *d)
{
	int a;
	int b;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwyxzabcdefghijklm";
	for (a = 0; d[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
		if (d[a] == data1[b])
		{
		d[a] = datarot[b];
	break;
		}
		}
	}
return (d);
}
