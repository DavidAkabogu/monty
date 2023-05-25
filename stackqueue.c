#include "monty.h"

/**
 * stack_copy - this opcode sets the format of the data to a stack (LIFO).
 *		This is the default behavior of the program.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void stack_copy(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

/**
 * queue_copy - this opcode sets the format of the data to a queue (FIFO).
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void queue_copy(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
