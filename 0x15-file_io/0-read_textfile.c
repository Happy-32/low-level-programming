#include "main.h"

/**
 * read_textfile - function that prints the content
 * of a file
 * @filename: name of the file to print
 * @letters: number of letters to print from the file
 * Return: Number of characters read, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	ssize_t read_chars;

	fptr = fopen(filename, "r"); /* Read the file*/
	if (fptr == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		fclose(fptr);
		return (0);
	}

	read_chars = 0;
	while (fgets(buffer, letters + 1, fptr) != NULL)
	{
		printf("%s", buffer);
		read_chars += strlen(buffer);
	}

	if (ferror(fptr))
	{
		fprintf(stderr, "Error: Failed to read file %s\n", filename);
		read_chars = 0;
	}

	fclose(fptr);
	free(buffer);

	return (read_chars);
}

