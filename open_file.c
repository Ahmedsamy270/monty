#include "monty.h"

/**
 * open_file - is a function that open file
 * @filename: is a pointer to file name
 */

void open_file(char *filename)
{
	FILE *fd = fopen(filename, "r");

	if (filename == NULL || fd == NULL)
	{
		error(2, filename);
	}
	file_read(fd);
	fclose(fd);
}
