#include "monty.h"
/**
 * f_pall - For printing stack
 * @head: head of stack
 * counter: unused
 * Return: empty
*/
void f_palll(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	if (a == NULL)
		return;
	while(a)
	{
		print("%d\n", a->n);
		a = h->next;
	}
}
