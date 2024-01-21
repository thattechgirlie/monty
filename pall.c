#include "monty.h"
/**
 * f_pall - prints all
 * @head: this is the head of stack
 * @counter: count
 * Return: returns origin
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
