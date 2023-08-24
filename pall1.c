#include "monty.h"

/**
 * pall_opcode - Implements the pall opcode.
 * @stack: A pointer to the stack.
 * @line_number: The line number being processed in the Monty file.
 */
void pall_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;

	(void)line_number;

	current_node = *stack;
	while (current_node)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}

