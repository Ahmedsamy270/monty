#include "monty.h"
stack_t *head = NULL;

/**
 * main - is the main function
 * @argc: number of arguments line
 * @argv: is an array of strings in comand stdin
 * Return: 0 If Success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_node();
	return (0);
}

/**
 * creat_node - is a function that creats a new node
 * @n: is the data inside node
 * Return: the Adress Of The New Node
 */

stack_t *creat_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		error(4);
	}
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}

/**
 * add_to_queue - is a function that adds new nodes to linked list
 * @newnode: is the  new node to be added to linked list
 * @n: is the number to line of opcode
 */

void add_to_queue(stack_t **newnode, __attribute__((unused))unsigned int n)
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
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *newnode;
	(*newnode)->prev = temp;
}

/**
 * free_node - is a function that frees all the nodes in linked list
 * Return : Void
 */

void free_node(void)
{
	stack_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
