#include "monty.h"
/**
* clear_part2 - This should free double linkes list
* @header: head of the stack
* Return: nothing as it is void
*/
void clear_part2(stack_t *header)
{
	stack_t *outcome = header;

	while (header != NULL)
	{
		outcome = header->next;
		free(header);
		header = outcome;
	}
}
