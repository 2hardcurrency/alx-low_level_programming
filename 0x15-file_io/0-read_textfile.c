#include "main.h"
#include <xtdio.h>
#include <stdlib.h>

/**
 * read_textfile -  function that reads a text file and prints it 
 *
 * Return: 0
 * @letter: string to be printed
 *
 * @fp: pointer that stores the address
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char letter[20];

	fp = fopen("filename", "r");

	if (filename == NULL)
	{
		return (0);
	}

	if (fp == NULL)
		return (0);

	printf("%s", fgets(letter, letters), fp);
		fclose(fp);

		return (0);
}
