#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
stack_t *creat_node(int n);
void add_to_queue(stack_t **newnode, __attribute__((unused))unsigned int n);
void free_node(void);
void open_file(char *filename);
void file_read(FILE *fd);
int sep_line(char *buff, int line, int format);
void function_search(char *opcode, char *value, int line, int format);
void function_call(op_func func, char *op, char *value, int line, int format);
void add_stack(stack_t **newnode, __attribute__((unused)) unsigned int line);
void prnt_stack(stack_t **stack, unsigned int line);
void pop_top(stack_t **stack, unsigned int line);
void prnt_top(stack_t **stack, unsigned int line);
void nop(stack_t **stack, unsigned int line);
void swp_nod(stack_t **stack, unsigned int line);
void add_nod(stack_t **stack, unsigned int line);
void error(int error_number, ...);
void extra_error(int error_number, ...);


#endif
