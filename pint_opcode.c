#include "monty.h"

/**
 * pint_opcode - Prints the value at the top of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 */
void pint_opcode(stack_t **stack, unsigned int line_number)
{
    if (!*stack)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*stack)->n);
}

