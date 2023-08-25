#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LINE_SIZE 1024

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct bus_s - Global variables
 * @file: file pointer
 * @content: content of current line
 * @arg: argument for push opcode
 * @lifo: flag for stack or queue mode
 */
typedef struct bus_s
{
    FILE *file;
    char *content;
    char *arg;
    int lifo;
} bus_t;

extern bus_t bus;

/* Function prototypes */
void custom_push(stack_t **stack, unsigned int line_num);
void custom_pall(stack_t *stack);
void free_stack(stack_t *stack);
void pop_opcode(stack_t **stack, unsigned int line_number);
void swap_opcode(stack_t **stack, unsigned int line_number);
size_t stack_length(stack_t *stack);

#endif /* MONTY_H */

