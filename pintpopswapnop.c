#include "monty.h"

/**
 * pint_copy - this opcode prints the value at the top of the stack,
 *		followed by a new line.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void pint_copy(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * pop_copy - this opcode removes the top element of the stack.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void pop_copy(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
 * swap_copy - this opcode swaps the top two elements of the stack.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void swap_copy(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}

/**
 * nop_copy - this opcode doesn’t do anything.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void nop_copy(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
