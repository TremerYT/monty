#include "monty.h"
/**
 * node_push: This is used to push a node to atscak
 * @header: This is the header of the stack
 * @b: This is the position of the line
 * Return: nothing as the function is void
*/
void node_push(stack_t **header, unsigned int i)
{
	int n, counting = 0, f = 0;

	if (ching.argument)
	{
		if (ching.argument[0] == '-')
			counting++;
		for (; ching.argument[counting] != '\0'; counting++)
		{
			if (ching.argument[counting] > 57 || ching.argument[counting] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(ching.my_file);
			free(ching.con);
			clear_me(*header);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(ching.my_file);
		free(ching.con);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	n = _atoi(ching.argument);
	if (ching.fin == 0)
		node_adder(header, n);
	else
		node_adder(header, n);
}
