#include "monty.h"

/**
 * pop_opcode - Removes the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 */
void pop_opcode(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (!*stack)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

