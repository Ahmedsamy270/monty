#include "monty.h"

/**
 * prnt_top - is a function that prints the top of the stack
 * @stack: is a pointer to the top of the stack
 * @line: is the number of the line in opcode
 */

void prnt_top(stack_t **stack, unsigned int line)
{
	if (stack == NULL || *stack == NULL)
	{
		extra_error(6, line);
	}
	printf("%d\n", (*stack)->n);
}
