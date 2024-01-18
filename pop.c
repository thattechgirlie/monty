#include "monty.h"
/**
 * f_pop - removes the top element of the stack
 * @head: this is the head of stack
 * @counter: counts the values
 * Return: returns value
 */
void f_pop (stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack\n", counter);
		fclode(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
