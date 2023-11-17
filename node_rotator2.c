#include "monty.h"
/**
  *node_rotator2- This function rotates the stackkkkkkkkkkk
  *@header: This is the header of the stack.
  *@i: This acts as the counter
  *Return: nothing
 */
void node_rotator2(stack_t **header, __attribute__((unused)) unsigned int i)
{
	stack_t *current_one;

	current_one = *header;
	if (*header == NULL || (*header)->next == NULL)
		return;
	while (current_one->next)
		current_one = current_one->next;
	current_one->next = *header;
	current_one->prev->next = NULL;
	current_one->prev = NULL;
	(*header)->prev = current_one;
	(*header) = current_one;
}
