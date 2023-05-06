#include "main.h"

/**
 * create_file - Function to create a file
 * @filename: Name of the file to be created
 * @text_content: Content of the new file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);

	fptr = fopen(filename, "w");
	if (fptr == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fptr, "%s", text_content);

	fclose(fptr);
	return (1);
}

