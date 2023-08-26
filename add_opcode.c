#include "monty.h"

/**
 * add_opcode - Adds the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 */
void add_opcode(stack_t **stack, unsigned int line_number)
{
    int sum;
    stack_t *temp;

    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    sum = (*stack)->n + (*stack)->next->n;
    temp = *stack;
    pop(stack, line_number);
    (*stack)->n = sum;
    free(temp);
}

