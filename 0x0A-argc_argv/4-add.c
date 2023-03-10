#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: arg counts
 * @argv: arg vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int h, sum = 0;
	char *u;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			u = argv[i];

			for (h = 0; h < strlen(u); h++)
			{
				if (u[h] < 48 || u[h] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(u);
			u++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
