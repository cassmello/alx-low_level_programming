#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- print to STDOUT.
 * @filename: file parameter
 * @letters: letter parameter
 * Return: -1 or Empty file.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *out;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	out = malloc(sizeof(char) * letters);
	c = read(a, out, letters);
	b = write(STDOUT_FILENO, out, c);

	free(out);
	close(a);
	return (b);
}
