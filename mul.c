#include "monty.h"
/**
 * f_mul - multiplies the second top element of the stack with the top
 * @head: this is the head of stack
 * @counter: counts value
 */
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->next->n * h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
