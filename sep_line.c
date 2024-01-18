#include "monty.h"

/**
 * sep_line - is a function that seperate lines to tokens and
 * search for the function
 * @buff: is a pointer to the line in file
 * @line: is the line number
 * @format: is the format to the node
 * Return: 1 If queue Or 0 If Stack
 */

int sep_line(char *buff, int line, int format)
{
	char *value, *opcode;
	const char *delim = "\n";

	if (buff == NULL)
	{
		error(4);
	}
	opcode = strtok(buff, delim);
	if (opcode == NULL)
	{
		return (format);
	}
	value = strtok(NULL, delim);
	if (strcmp(opcode, "queue") == 0)
		return (1);
	if (strcmp(opcode, "stack") == 0)
		return (0);
	function_search(opcode, value, line, format);
	return (format);
}
