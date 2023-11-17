#include "monty.h"
/**
  *node_rotator- This is the tack rotator
  *@header: this is the header of the stack head
  *@i: This is the counter
  *Return: Nothing as it is void
 */
void node_rotator(stack_t **head, __attribute__((unused)) unsigned int i)
{
	stack_t *current_one;
	stack_t *outcome;

	current_one = *header;
	if (*header == NULL || (*header)->next == NULL)
		return;
	outcome = (*header)->next;
	outcome->prev = NULL;
	while (current_one->next != NULL)
		current_one = current_one->next;
	current_one->next = *header;
	(*header)->next = NULL;
	(*header)->prev = current_one;
	(*header) = outcome;
}
