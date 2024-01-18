#include "monty.h"
/**
 * f_sub -  subtracts the top element from the second top element
 * @head: this is the head of stack
 * @counter: counts value
 * Return: returns void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int v, nds;
	a = *head;

	for (nd = 0; a != NULL; nd++)
		a = a->next;
	if (nd < 2)
	{
		fprints(stderr, "L<line_number>: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	v = a->next->n - a->n;
	a->next->n = v;
	*head = a->next;
	free(aux);
}
