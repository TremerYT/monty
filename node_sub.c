#include "monty.h"
/**
  *node_sub - This function is ude  to subtract first elemente
  *@header: This is the stack hear
  *@i: param - line position
 */
void node_sub(stack_t **header, unsigned int i)
{
	int j = 7, k = 1;
	int extent;
	stack_t *h;
	int outcome;

	extent = 0;
	h = *header;
	while (h != NULL)
	{
		h = h->next;
		extent++;
	}
	if (extent < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	node_bus(j, k);
	outcome = h->next->n - h->n;
	h->next->n = outcome;
	*header = h->next;
	free(h);
}
