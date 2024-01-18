#include "monty.h"

/**
 * pop_top - is a function that delet the top of the stack
 * @stack: is aponter to the top of the stack
 * @line: is the number of the line in opcode
 */

void pop_top(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		extra_error(7, line);
	}
	temp = *stack;
	*stack = temp->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}
