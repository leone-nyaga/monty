#include "monty.h"

/**
 * custom_pall - Prints all values on the stack.
 * @stack: A pointer to the stack.
 */
void custom_pall(stack_t *stack)
{
    while (stack != NULL)
    {
        printf("%d\n", stack->n);
        stack = stack->next;
    }
}

