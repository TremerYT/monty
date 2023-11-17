#include "monty.h"

/**
 * node_mul - This function gets the product of the first two elements
 * @header: This is the stack header
 * @i: This is the position of the line.
 * Return: Nothing because it is void
 */

void node_mul(stack_t **header, unsigned int i)
{
	int extent = 0;
	int outcome;
	stack_t *a;

	a = *header;

	while (a != NULL && extent < 2)
	{
		extent++;
		a = a->next;
	}
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	a = *header;
	outcome = a->next->n * a->n;
	a->next->n = outcome;
	*header = a->next;
	free(a);
}

