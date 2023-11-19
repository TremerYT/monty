#include "monty.h"

/**
 * adele - This function adds the first two elements of stack
 * @header: This is the header
 * @i: This is the exent counter
 * Return: Nothing i guess
 */

void adele(stack_t **header, unsigned int i)
{
	int extent, outcome;
	stack_t *h;

	h = *header;

	extent = 0;

	while (h != NULL)
	{
		h = h->next;
		extent++;
	}
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	node_bus(2, 6);
	h = *header;
	outcome = h->n + h->next->n;
	h->next->n = outcome;
	*header = h->next;
	free(h);
}
