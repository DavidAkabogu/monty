#include "monty.h"

/**
 * pchar_copy - this opcode prints the char at the top of the stack,
 *		followed by a new line.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void pchar_copy(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}

/**
 * pstr_copy - this opcode prints the string starting at the top of the stack,
 *		followed by a new line.
 * @head: pointer to a pointer to the head node of the stack
 * @counter: line_number
 */
void pstr_copy(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
