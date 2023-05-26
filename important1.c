#include "monty.h"

/**
 * execute - Function that executes the opcode
 * @stack: Head linked list - stack
 * @counter: Line_counter
 * @file: Pointer to monty file
 * @content: Line content
 * Return: 1 on success
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_copy}, {"pall", pall_copy}, {"pint", pint_copy},
				{"pop", pop_copy},
				{"swap", swap_copy},
				{"add", add_copy},
				{"nop", nop_copy},
				{"sub", sub_copy},
				{"div", div_copy},
				{"mul", mul_copy},
				{"mod", mod_copy},
				{"pchar", pchar_copy},
				{"pstr", pstr_copy},
				{"rotl", rotl_copy},
				{"rotr", rotr_copy},
				{"queue", queue_copy},
				{"stack", stack_copy},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && op)
	{
		if (strcmp(op, opst[j].opcode) == 0)
		{	opst[j].f(stack, counter);
			return (0);
		}
		j++;
	}
	if (op && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
