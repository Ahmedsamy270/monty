#include "monty.h"

/**
 * function_search - is a function that searchingg for the
 *function at the opcode.
 * @opcode: is the opcode
 * @value: is the arguments in the opcode
 * @line: is the line number
 * @format: is the format
 */

void function_search(char *opcode, char *value, int line, int format)
{
	int f, i;

	instruction_t functions_list[] = {
		{"push", add_stack},
		{"pall", prnt_stack},
		{"pint", prnt_top},
		{"pop", pop_top},
		{"nop", nop},
		{"swap", swp_nod},
		{"add", add_nod}
	};
	if (opcode[0] == '#')
		return;
	for (f = 1, i = 0; functions_list[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, functions_list[i].opcode) == 0)
		{
			function_call(functions_list[i].f, opcode, value, line, format);
			f = 0;
		}
	}
	if (f == 1)
	{
		error(3, line, opcode);
	}
}
