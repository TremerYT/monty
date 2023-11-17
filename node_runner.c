#include "monty.h"
/**
* node_runner - This function runs opcode
* @header: this is the header of the linked list.
* @i: param - line position.
* @file: This is the pointer to the file
* @cont: This is the content of the file
* Return: This shuld returns 1.
*/
int node_runner(char *cont, stack_t **header, unsigned int i, FILE *file)
{
	char *op;
	instruction_t tally[] = {
				{"push", node_push}, {"pall", node_pall}, {"pint", node_pint},
				{"pop", node_pop}, {"swap", node_swap}, {"add", node_add},
				{"nop", node_nop}, {"sub", node_sub}, {"div", node_div},
				{"mul", node_mul}, {"mod", node_modulus}, {"pchar", node_pchar},
				{"pstr", node_pstr}, {"rotl", node_rotator}, {"rotr", node_rotator2},
				{"queue", node_queue}, {"stack", node_stack}, {NULL, NULL}
				};
	unsigned int index = 0;
	int a = 7, j = 2;

	op = strtok(cont, " \n\t");
	node_exchanger(a, j);
	if (op && op[0] == '#')
		return (0);
	ching.argument = strtok(NULL, " \n\t");
	while (tally[index].opcode && op)
	{
		if (strcmp(op, tally[index].opcode) == 0)
		{	tally[index].f(header, i);
			return (0);
		}
		index++;
	}
	if (op && tally[index].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", i, op);
		fclose(file);
		free(cont);
		clear_part2(*header);
		exit(EXIT_FAILURE);
	}
	return (1);
}
