#include "monty.h"
/**
 * node_swap - This adds the top two elements of a stack
 * @header: this is the head of the stack.
 * @i: This is the position of the line
 * Return: nothing
*/
void node_swap(stack_t **header, unsigned int i)
{
	int outcome, extent;
	stack_t *h;

	h = *header;
	for (extent = 0; h != NULL; extent++)
		h = h->next;
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	outcome = h->n;
	h->n = h->next->n;
	h->next->n = outcome;
}
