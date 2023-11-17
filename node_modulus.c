#include "monty.h"

/**
 * node_modulus - This is the modulus of the first two elements
 * @header: This is the stack header
 * @i: This is the position of the line
 * Return: This Returns nothing as it is void
 */

void node_modulus(stack_t **header, unsigned int i)
{
	stack_t *h;
	int extent, outcome;

	h = *header;
	extent = 0;

	while (h != NULL)
	{
		h = h->next;
		extent++;
	}
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	outcome = h->next->n % h->n;
	h->next->n = outcome;
	*header = h->next;
	free(h);
}
