#include "main.h"
#include <stdio.h>

/**
 * create_file - Create a function that creates a file.
 *
 * @filename: name of the file to be created
 *
 * @text_content: the string to be written
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	char str[20] = "text_content";
	int o, w, len;
	FILE *fptr;

	ptr = fopen("filename", "rw");

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

	{
		for (len = 0; text_content[len]);
		len++;
	}

	fclose(ptr);

	return (1);
}

