#include "main.h"

/**
 * append_text_to_file - function that appends text
 * to the end of a file
 * @filename: file to append text to
 * @text_content: Content being added to file
 * Return: on success return 1
 *         on failure return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fptr = fopen(filename, "a");

	if (fptr == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, fptr) == EOF)
	{
		fclose(fptr);
		return (-1);
	}

	if (fclose(fptr) == EOF)
	{
		return (-1);
	}

	return (1);
}

