#include "monty.h"
/**
 * node_pstr - displays string starting at the top.
 * @header: this is the stack header
 * @i: this shows the position of the line
 * Return: nothing
*/
void node_pstr(stack_t **header, unsigned int i)
{
	stack_t *a;
	(void)i;

	a = *header;
	while (a != NULL)
	{
		if (a->n > 127 || a->n <= 0)
			break;
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
