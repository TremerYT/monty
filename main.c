#include "monty.h"
#include "vars.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - This is the main function of the code
* @argc: This is the argument count
* @argv: This is the argument vector
* Return: Return 0 on success
*/
int main(int argc, char *argv[])
{
	ssize_t line_reader = 1;
	unsigned int i = 0;
	char *con;
	int a = 7, j = 1;
	stack_t *h = NULL;
	FILE *my_file;
	size_t size = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		node_bus(i, j);
		exit(EXIT_FAILURE);
	}
	my_file = fopen(argv[1], "r");
	ching.my_file = my_file;
	if (!my_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_reader > 0)
	{
		con = NULL;
		line_reader = getline(&con, &size, my_file);
		ching.con = con;
		i++;
		if (line_reader > 0)
			node_runner(con, &h, i, my_file);
		free(con);
	}
	clear_part2(h);
	node_exchanger(a, j);
	fclose(my_file);
return (0);
}
