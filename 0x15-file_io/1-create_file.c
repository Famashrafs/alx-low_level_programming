#include "main.h"

/**
 * create_file - Creates a file.
 * @fileName: A pointer to the name of the file to create.
 * @textContent: A pointer to a string that will be  writen to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fileName, char *textContent)
{
	int fd, w, len = 0;

	if (fileName == NULL)
		return (-1);

	if (textContent != NULL)
	{
		for (len = 0; textContent[len];)
			len++;
	}

	fd = open(fileName, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, textContent, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
