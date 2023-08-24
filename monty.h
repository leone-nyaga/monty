#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE 1024

typedef struct Stack {
    int array[STACK_SIZE];
    int top;
} Stack;

extern Stack stack;

void push(int value);
void pop();
void pall();

#endif /* MONTY_H */

