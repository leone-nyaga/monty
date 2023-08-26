#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_opcode - Swaps the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 */
void swap_opcode(stack_t **stack, unsigned int line_number)
{
    int temp;

    if (stack_length(*stack) < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}

