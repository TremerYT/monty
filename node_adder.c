#include "monty.h"

/**
 * node_adder - This function adds the head of the stack
 * @header: This is the header odf the stack
 * @n: this is the new entra
 * Return: Nothing i guess
 */

void node_adder(stack_t **header, int n)
{
	stack_t *new_one;
	stack_t *h;

	h = *header;
	new_one = malloc(sizeof(stack_t));
	if (!new_one)
	{
		printf("Error found\n");
		exit(0);
	}

	if (h != NULL)
	{
		h->prev = new_one;
	}

	new_one->n = n;
	new_one->next = *header;
	new_one->prev = NULL;

	*header = new_one;
}
