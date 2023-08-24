#include "monty.h"

/**
 * pall - Prints all values in the stack.
 */
void pall(void)
{
    for (int i = top - 1; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

