#include "monty.h"

/**
 * extra_error - is a function that prints error
 * @error_number: is the number of the error place
 */

void extra_error(int error_number, ...)
{
	va_list arg;
	char *opcode;
	int line;

	va_start(arg, error_number);
	switch (error_number)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n", va_arg(arg, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n", va_arg(arg, int));
			break;
		case 8:
			line = va_arg(arg, unsigned int);
			opcode = va_arg(arg, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", line, opcode);
			break;
		default:
			break;
	}
	free_node();
	exit(EXIT_FAILURE);
}
