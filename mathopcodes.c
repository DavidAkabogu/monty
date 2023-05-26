#include "monty.h"

/**
 * add_copy - This opcode adds the top two elements of the stack.
 * @head: Pointer to pointer to the head node of the stack
 * @counter: Line_number
 *
 * Return: Void
 */
void add_copy(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

/**
 * sub_copy - This opcode subtracts the top element of the stack
 *		from the second top element of the stack.
 * @head: Pointer to a pointer to the head node of the stack
 * @counter: Line_number
 *
 * Return: Void
 */
void sub_copy(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}

/**
 * div_copy - This function divides the second top element of the stack
 *		by the top element of the stack.
 * @head: Pointer to a pointer to the head node of the stack
 * @counter: line_number
 *
 * Return: Void
 */
void div_copy(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

/**
 * mul_copy - This function multiplies the second top element of the stack
 *		with the top element of the stack.
 * @head: Pointer to a pointer to the head node of the stack
 * @counter: Line_number
 *
 * Return: Void
 */
void mul_copy(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

/**
 * mod_copy - This function computes the rest of the division of the
 *		second top element of the stack by the top element of the stack.
 * @head: Pointer to a pointer to the head node of the stack
 * @counter: line_number
 *
 * Return: Void
 */
void mod_copy(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
