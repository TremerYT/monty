#include "monty.h"

/**
 * node_pall - This function prints the stack
 * @header: This is the header of the node
 * @i: unused
 * Return: Nothing because its a void function;
 */

void node_pall(stack_t **header, unsigned int i)
{
	stack_t *a;
	(void)i;

	a = *header;
	if (a == NULL)
		return;
	while (a != NULL)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}


