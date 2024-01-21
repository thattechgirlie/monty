#include "monty.h"
/**
 * f_div - divides the second top element of the stack by the top
 * @head: this is the head of stack
 * @counter: counts value
 *
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int ln = 0, a;
	h = *head;

	while (h)
	{
		h = h->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = h->next->n / h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
