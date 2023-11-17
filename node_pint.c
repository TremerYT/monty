#include "monty.h"
/**
 * node_pint - This function displays the first element
 * @header: This is the header of the stack
 * @i: This shows the position of the line
 * Return: Nothing because its void
 */
void node_pint(stack_t **header, unsigned int i)
{
	if (*header == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*header)->n);
}
