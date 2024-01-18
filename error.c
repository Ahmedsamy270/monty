#include "monty.h"

/**
 * error - is a function that prints errors
 * @error_number: is a noumber for the error place
 */

void error(int error_number, ...)
{
	va_list arg;
	char *opcode;
	int line;

	va_start(arg, error_number);
	switch (error_number)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n", va_arg(arg, char *));
			break;
		case 3:
			line = va_arg(arg, int);
			opcode = va_arg(arg, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(arg, int));
			break;
		default:
			break;
	}
	free_node();
	exit(EXIT_FAILURE);
}
