#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate
 *
 * Return: string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dupli;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	dupli = malloc(sizeof(char) * (len + 1));

	if (dupli == NULL)
		return (NULL);

	while ((dupli[i] = str[i]) != '\0')
		i++;

	return (dupli);
}
