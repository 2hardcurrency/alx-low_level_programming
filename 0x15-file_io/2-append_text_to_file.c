#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends at the end of a file
 * @text_content: content of the file
 *
 * @filename: name of the file to be appended on
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len;
	FILE *ptr;

	ptr = fopen("filename", O_RWONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, _strlen(text_content));
	}

	if (len == -1)
		return (-1);

	fclose(ptr);

	return (1);
}



