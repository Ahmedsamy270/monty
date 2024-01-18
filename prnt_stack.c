#include "monty.h"

/**
 * prnt_stack - is a function that prints the stack nodes
 * @stack: is a pointer to the top of the stack
 * @line: is a number of the line in opcode
 */

void prnt_stack(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	(void) line;
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
