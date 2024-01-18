#include "monty.h"

/**
 * add_nod - is a finction that add the top two nodes
 * @stack: is apointer to the top of stack
 * @line: is the number of line in opcode
 */

void add_nod(stack_t **stack, unsigned int line)
{
	int total;

	if ((*stack)->next == NULL || *stack == NULL || stack == NULL)
	{
		extra_error(8, line, "adding");
	}
	(*stack) = (*stack)->next;
	total = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = total;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
