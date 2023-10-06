#include "pid.h"
#include <stdio.h>

/**
 * main - entry point
 * argc: the number of items in av
 * argv: argumnt v
 * Return: 0.
 */
int main(int argc, char *argv[])
{

for (int i = 1; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}

return (0);
}
