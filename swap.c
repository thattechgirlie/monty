#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack
 * @head: this is the head of stack
 * @counter: counts value
 * Return: returns value
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, a;
	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L<line_number>: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n;
	h->n = h->next->n;
	h->next->n = a;
}
		
