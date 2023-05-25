#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <sys/types.h>

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

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	int lifi;
	char *arg;
	char *content;
	FILE *file;
}  bus_t;
extern bus_t bus;

ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);

void free_stack(stack_t *head);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);

void push_copy(stack_t **head, unsigned int number);
void pall_copy(stack_t **head, unsigned int number);
void pint_copy(stack_t **head, unsigned int number);
void pop_copy(stack_t **head, unsigned int counter);
void swap_copy(stack_t **head, unsigned int counter);
void nop_copy(stack_t **head, unsigned int counter);
void add_copy(stack_t **head, unsigned int counter);
void sub_copy(stack_t **head, unsigned int counter);
void div_copy(stack_t **head, unsigned int counter);
void mul_copy(stack_t **head, unsigned int counter);
void mod_copy(stack_t **head, unsigned int counter);
void pchar_copy(stack_t **head, unsigned int counter);
void pstr_copy(stack_t **head, unsigned int counter);
void rotl_copy(stack_t **head, __attribute__((unused)) unsigned int counter);
void rotr_copy(stack_t **head, __attribute__((unused)) unsigned int counter);
void stack_copy(stack_t **head, unsigned int counter);
void queue_copy(stack_t **head, unsigned int counter);

#endif
