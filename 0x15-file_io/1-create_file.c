#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, flags;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	mode_t mode = S_IRUSR | S_IWUSR;

	flags = O_WRONLY | O_CREAT | O_TRUNC;

	fd = open(filename, flags, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1 || bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
