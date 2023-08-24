#include "monty.h"

void push_opcode(stack_t **stack, unsigned int line_number)
{
    int num, i = 0, invalid = 0;

    if (bus.arg)
    {
        if (bus.arg[0] == '-')
            i++;
        
        while (bus.arg[i] != '\0')
        {
            if (bus.arg[i] < '0' || bus.arg[i] > '9')
                invalid = 1;
            i++;
        }
        
        if (invalid)
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            fclose(bus.file);
            free(bus.content);
            free_stack(*stack);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    num = atoi(bus.arg);
    
    if (bus.lifi == 0)
        addnode(stack, num);
    else
        addqueue(stack, num);
}

