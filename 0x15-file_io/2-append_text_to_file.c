#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file pointer
 * @text_content: text parameter
 * Return: alternate NULL values.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, leng);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
