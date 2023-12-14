#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack, followed by a new line.
 * @head: head of stack
 * @counter: keeps track of line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if(*head == NULL)
	{
		fprint(stderr, "L%u: can't pint, stack emppty\n, counter");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
