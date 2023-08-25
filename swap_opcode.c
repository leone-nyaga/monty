#include "monty.h"

/**
 * swap_opcode - Swaps the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number of the current operation.
 */
void swap_opcode(stack_t **stack, unsigned int line_number)
{
    stack_t *top = *stack, *next = NULL;
    int temp;

    if (stack_length(*stack) < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    next = (*stack)->next;
    temp = top->n;
    top->n = next->n;
    next->n = temp;
}

