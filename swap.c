#include "monty.h"

/**
 * swp_nod - is a function that swaping the top two nodes
 * @stack: is a pointer to the top of the stack
 * @line: is the line number in opcode
 */

void swp_nod(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (stack == NULL || (*stack)->next == NULL || *stack == NULL)
	{
		extra_error(8, line, "swp");
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = *stack;
	}
	temp->next = *stack;
	(*stack)->prev = temp;
	temp->prev = NULL;
	*stack = temp;
}
