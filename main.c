#include "monty.h"
#include <stdio.h>

#define MAX_LINE_SIZE 1024

bus_t bus = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
    char line_content[MAX_LINE_SIZE];
    FILE *monty_file;
    stack_t *stack = NULL;
    unsigned int line_number = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    
    monty_file = fopen(argv[1], "r");
    bus.file = monty_file;
    
    if (!monty_file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while (fgets(line_content, sizeof(line_content), monty_file))
    {
        line_number++;
        bus.content = line_content;
        
        if (strncmp(line_content, "push", 4) == 0)
        {
            bus.arg = line_content + 4; 
            custom_push(&stack, line_number);
        }
        else if (strncmp(line_content, "pall", 4) == 0)
        {
            custom_pall(stack);
    }
    
    free_stack(stack);
    fclose(monty_file);
    
    return (0);
}

