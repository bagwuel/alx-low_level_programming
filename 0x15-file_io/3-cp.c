#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - copies the content of a file to another file.
 * @argc: length of input array
 * @argv: argument vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	char *usage = "Usage: cp file_from file_to";
	char *from_buffer;
	int from, rb, fd, wb;

	if (argc != 3)
	{
		write(STDERR_FILENO, usage, strlen(usage));
		exit(97);
	}
	from_buffer = malloc(sizeof(char) * 1024);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(from_buffer);
		close(from);
		exit(98);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(from_buffer);
		close(from);
		exit(99);
	}
	do {
		rb = read(from, from_buffer, 1024);
		if (rb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(from_buffer);
			exit(98);
		}
		wb = write(fd, from_buffer, rb);
		if (wb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(from_buffer);
			exit(99);
		}
		fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (rb > 0);
	close(from);
	close(fd);
	free(from_buffer);
	return (0);
}
