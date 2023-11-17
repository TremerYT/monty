#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct stub_s
{
	int fin;
	char *con;
	char *argument;
	FILE *my_file;
} stub_t;
extern stub_t ching;

void adele(stack_t **header, unsigned int i);
void node_adder(stack_t **header, int i);
void node_divider(stack_t **header, unsigned int i);
void node_modulus(stack_t **header, unsigned int i);
void node_nope(stack_t **header, unsigned int i);
void node_mul(stack_t **header, unsigned int i);
void node_pall(stack_t **header, unsigned int i);
void node_pint(stack_t **header, unsigned int i);
void node_pchar(stack_t **header, unsigned int i);
void node_pop(stack_t **header, unsigned int i);
void node_pstr(stack_t **header, unsigned int counter);
void node_push(stack_t **header, unsigned int b);
void node_rotator(stack_t **head,  __attribute__((unused)) unsigned int i);
void node_rotator2(stack_t **head, __attribute__((unused)) unsigned int i);
int node_runner(char *cont, stack_t **header, unsigned int i, FILE *file);
void node_stack(stack_t **header, unsigned int i);
void node_sub(stack_t **header, unsigned int i);
void node_swap(stack_t **header, unsigned int i);
void clear_part2(stack_t *head);
void node_bus(int hea, int li);
void node_exchanger(int i, int j);
void node_queue(stack_t **head, unsigned int i);


#endif
