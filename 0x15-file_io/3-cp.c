#include "main.h"
#include <sys/stat.h>

/**
 * error - prints an error message and exits the program with a given code
 * @code: exit code to use
 * @message: error message to print
 * @filename: name of the file causing the error
 * @er: file descriptor to close
 */
void error(int code, char *message, char *filename, int er)
{
	dprintf(STDERR_FILENO, message, filename);
	if (er != -1)
	{
		close(er);
	}
	exit(code);
}

/**
 * main - entry point of the program
 * @ac: number of arguments passed to the program
 * @av: array of pointers to the arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int ac, char **av)
{
	int source_fptr, destination_fptr;
	char buffer[BUFFER];
	ssize_t size_read, size_write;
	struct stat st;

	/* check that two arguments were provided */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s Sourcefile Destinationfile\n", av[0]);
		exit(97);
	}

	/* open the source file for reading */
	source_fptr = open(av[1], O_RDONLY);
	if (source_fptr == -1)
	{
		error(98, "Error: Can't read from file %s\n", av[1], -1);
	}

	/* get the file mode of the source file */
	if (fstat(source_fptr, &st) == -1)
	{
		error(98, "Error: Can't read from file %s\n", av[1], source_fptr);
	}

	/* open the destination file for writing */
	destination_fptr = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0777);
	if (destination_fptr == -1)
	{
		error(99, "Error: Can't write to %s\n", av[2], -1);
	}

	/* copy content from the source file to the destination file */
	while ((size_read = read(source_fptr, buffer, BUFFER)) > 0)
	{
		size_write = write(destination_fptr, buffer, size_read);

		if (size_write == -1 || size_write != size_read)
		{
			error(99, "Error: Can't write to file %s\n", av[2], -1);
		}
	}

	/* check if an error occurred while reading from the source file */
	if (size_read == -1)
	{
		error(98, "Error: Can't read from file %s\n", av[1], source_fptr);
	}

	/* close the file descriptors */
	if (close(source_fptr) == -1)
	{
		error(100, "Error: Can't close fd %d\n", av[1], -1);
	}
	if (close(destination_fptr) == -1)
	{
		error(100, "Error: Can't close fd %d\n", av[2], -1);
	}
	return (0);
}

