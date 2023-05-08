#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to be added at the end of the file
 *
 * Return: 1 on success, -1 on failure or if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wb;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wb = write(fd, text_content, strlen(text_content));
		if (wb == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
