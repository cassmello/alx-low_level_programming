#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer parameter.
 * @text_content: pointer parameter.
 * Return: -1 or otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, leng);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
