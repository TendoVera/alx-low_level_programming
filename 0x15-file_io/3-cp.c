#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * error_file - program that copies the content of a file to another file.
 * @argv: vector arg.
 * @file_to: to file.
 * @file_from: from file.
 * Return: 0.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arg vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, er_rorclose;
ssize_t nchars, nwr;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
nchars = 1024;

while (nchars == 1024)
{
nchars = read(file_from, buff, 1024);

if (nchars == -1)
error_file(-1, 0, argv);
nwr = write(file_to, buff, nchars);

if (nwr == -1)
error_file(0, -1, argv);
}
er_rorclose = close(file_from);

if (er_rorclose == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
er_rorclose = close(file_to);

if (er_rorclose == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
