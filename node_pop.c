#include "monty.h"
/**
 * node_pop - This function prints the first element of the stck
 * @header: This is the stack head
 * @i: This shows the line position of the line
 * Return: nothing
*/
void node_pop(stack_t **header, unsigned int i)
{
	stack_t *a;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_me(*header);
		exit(EXIT_FAILURE);
	}
	a = *header;
	*header = a->next;
	free(a);
}
