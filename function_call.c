#include "monty.h"

/**
 * function_call - is a function that calling the required function
 * @func: is a apointer to the function
 * @op: is a string of the opcode
 * @value: is a string to the value
 * @line: is the line number
 * @format: is the format
 */

void function_call(op_func func, char *op, char *value, int line, int format)
{
	int f = 1, i;
	stack_t *nod;

	if (strcmp(op, "push") == 0)
	{
		if (value != NULL && value[0] == '-')
		{
			value = value + 1;
			f = -1;
		}
		if (value == NULL)
		{
			error(5, line);
		}
		for (i = 0; value[i] != '\0'; i++)
		{
			if (isdigit(value[i]) == 0)
			{
				error(5, line);
			}
		}
		nod = creat_node(atoi(value) * f);
		if (format == 0)
		{
			func(&nod, line);
		}
		if (format == 1)
		{
			add_to_queue(&nod, line);
		}
	}
	else
	{
		func(&head, line);
	}
}
