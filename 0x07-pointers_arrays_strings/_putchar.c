#include "main.h"
#include <unistd.h>

/**
 * _putchar - inputs character c to stdout
 * @c: print character
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
