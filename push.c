#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @value: The value to be pushed.
 */
void push(int value)
{
    if (top >= STACK_SIZE)
    {
        fprintf(stderr, "Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }

    stack[top] = value;
    top++;
}

