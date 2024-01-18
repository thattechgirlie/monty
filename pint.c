#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @head: this is the head of stack
 * @counter: counts the values
 * Return: returns value
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
