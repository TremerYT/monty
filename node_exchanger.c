#include "monty.h"
/**
 * node_exchanger - This does nothing heheheheheh
 * @i: this is the first integer
 * @j: This is the second integer
 * Return: Nothing
 */

void node_exchanger(int i, int j)
{
	int tompo;

	if (i > j)
	{
		j = 0;
	}
	tompo = i;
	i = j;
	j = tompo;
}
