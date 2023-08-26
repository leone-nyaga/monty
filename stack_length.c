#include "monty.h"

/**
 * stack_length - Calculates the length of the stack.
 * @stack: Pointer to the stack.
 * Return: Number of elements in the stack.
 */
size_t stack_length(const stack_t *stack)
{
    size_t count = 0;
    while (stack)
    {
        count++;
        stack = stack->next;
    }
    return count;
}

