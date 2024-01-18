#include "monty.h"

/**
 * file_read - is a function that reads the file
 * @fd: is a pointer to the file descriptor
 */

void file_read(FILE *fd)
{
	char *buff = NULL;
	int line, format = 0;
	size_t lenth = 0;

	for (line = 1; getline(&buff, &lenth, fd) != -1; line++)
	{
		format = sep_line(buff, line, format);
	}
	free(buff);
}
