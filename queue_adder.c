#include "monty.h"

/**
 * queue_adder - This function adds the noden to the borrrom
 * @n: this is the new one
 * @header: This is the header
 * Return: Nothing because its void
 */

void queue_adder(stack_t **header, int n)
{
	stack_t *new_one;
	stack_t *outcome = *header;

	new_one = malloc(sizeof(stack_t));
	if (new_one == NULL)
	{
		printf("Error found\n");
	}
	new_one->n = n;
	new_one->next = NULL;
	if (outcome)
	{
		while (outcome->next)
			outcome = outcome->next;
	}
	else if (!outcome)
	{
		*header = new_one;
		new_one->prev = NULL;
	}
	else
	{
		outcome->next = new_one;
		new_one->prev = outcome;
	}
}

