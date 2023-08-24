#include "monty.h"

/**
 * custom_push - Pushes an element to the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number for error reporting.
 */
void custom_push(stack_t **stack, unsigned int line_number)
{
    int val;
    stack_t *new_node = malloc(sizeof(stack_t));

    if (scanf("%d", &val) != 1)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = val;
    new_node->prev = NULL;
    new_node->next = *stack;

    *stack = new_node;
}

