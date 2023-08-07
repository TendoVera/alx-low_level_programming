#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints i
 * to the POSIX standard output.
 * @filename: name of the file.
 * @letters:  the number of letters it should read and print.
 * Return: if write fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, ltt, w;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));

	if (!buff)
		return (0);
	ltt = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, ltt);

	free(buff);
	close(fd);

	return (w);
}
