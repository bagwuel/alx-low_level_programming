#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file to be read from
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print,
 * return 0 if file cannot be opened or filename is
 * NULL or write fails or does not write expected amount of byte
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t rb;
	ssize_t wb;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	rb = read(fd, buffer, letters);
	wb = write(STDOUT_FILENO, buffer, rb);
	if (wb != rb)
		return (0);
	close(fd);
	free(buffer);
	return (wb);
}
