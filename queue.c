#include "monty.h"
/**
 * f_queue - top of queue
 * @head; this is head of stack
 * @counter: counts the number of lines in stack
 *
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
/**
 * addqueue - adds queue to stack
 * @head: this is head of stack
 * @n: assigns new value
 *
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *a;
	a = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Error\n");
	new_node->n = n;
	new_node->next = NULL;
	if (!a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a->next = new_node;
		new_node->prev = a;
	}
}
