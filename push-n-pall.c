#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

void push(stack_t **stack, unsigned int line_number, char *argument)
{
    if (argument == NULL || !isdigit(*argument))
    {
        printf("L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = atoi(argument);
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;
    *stack = new_node;
}

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
