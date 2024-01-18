#include "monty.h"

/**
 * add_stack - is a function that add new node to stack
 * @newnode: is a pointer to the new node to be add
 * @line: is the number of the line in opcode
 */

void add_stack(stack_t **newnode, __attribute__((unused)) unsigned int line)
{
	stack_t *temp;

	if (newnode == NULL || *newnode == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		head = *newnode;
		return;
	}
	temp = head;
	head = *newnode;
	head->next = temp;
	temp->prev = head;
}
