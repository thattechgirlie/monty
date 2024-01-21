#include "monty.h"
/**
 * free_stack - code to free list
 * @head: this is the head of stack
 *
 */
void free_stack(stack_t *head)
{
stack_t *a;
a = head;
while (head)
{
	a = head->next;
	free(head);
	head = a;
}
}
