#include "monty.h"

/**
 * node_divide - This function divides the first two elements
 * @header: This is the header of the node
 * @i: This is the position of the line
 * Return: This returns nothing as it is void
 */

void node_div(stack_t **header, int i)
{
	stack_t *h;
	int extent, outcome;

	h = *header;

	extent = 0;

	while (h != NULL)
	{
		extent++;
		h = h->next;
	}
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}

	h = *header;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	outcome = h->next->n / h->n;
	h->next->n = outcome;
	*header = h->next;
	free(h);
}
