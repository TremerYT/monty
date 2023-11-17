#include "monty.h"
/**
 * node_pchar - This function displays character rep of the top
 * @header: This is the stack header
 * @i: This is the position of the line
 * Return: nothing
*/
void node_pchar(stack_t **header, unsigned int i)
{
	stack_t *a;
	int i = 5, j = 1;

	a = *header;
	if (a == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	if (a->n > 127 || a->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		node_bus(i, j);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a->n);
}
