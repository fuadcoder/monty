#include "monty.h"

/**
 * _queue - it sets the format of the data to a queue (FIFO)
 *
 * @doubly: the head of a linked list
 * @cline: the line number;
 * Return: no return
 */

void _queue(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 0;
}

/**
 * _stack - it sets a format for the data to a stack (LIFO)
 *
 * @doubly: the head of a linked list
 * @cline: the line number;
 * Return: no return
 */

void _stack(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 1;
}

/**
 * _add - it adds the top two elements of the stack
 *
 * @doubly: the head of a linked list
 * @cline: the line number;
 * Return: no return
 */

void _add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - it doesn't do anythinhg
 *
 * @doubly: the head of a linked list
 * @cline: the line number;
 * Return: no return
 */

void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub - it subtracts d top element to d second top element of d stack
 *
 * @doubly: the head of a linked list
 * @cline: the line number;
 * Return: no return
 */

void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}
