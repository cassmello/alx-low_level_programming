#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: file parameter.
 * Return: pointer .
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - Closes file descriptors.
 * @fd: a descriptor.
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: parameter
 * @argv: parameter
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int previous, next, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	previous = open(argv[1], O_RDONLY);
	x = read(previous, buffer, 1024);
	next = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (previous == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(next, buffer, x);
		if (next == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(previous, buffer, 1024);
		next = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	close_file(previous);
	close_file(next);

	return (0);
}
