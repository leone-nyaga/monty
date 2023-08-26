#include "monty.h"

/**
 * stack_length - Counts the number of elements in a stack
 * @stack: Pointer to the stack
 * Return: Number of elements in the stack
 */
size_t stack_length(const stack_t *stack)
{
    size_t count = 0;
    while (stack != NULL)
    {
        count++;
        stack = stack->next;
    }
    return count;
}

