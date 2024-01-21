#include "monty.h"
/**
 * execute - code to execute functions
 * @content: details of the stack
 * @stack: this is the stack
 * @counter: counts the number of lines
 * @file: this is the monty file
 * Return: returns value
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] =  {
				{"push", f_push}, {"pall", f_pall}, {"pop", f_pop}
				{"add", f_add}, {"div", f_div}, {"swap", f_swap}
				{"nop", f_nop}, {"sub", f_sub}, {"mul", f_mul}
				{"pint", f_pint}, {NULL, NULL}
				};
	unsigned int v = 0;
	char *op;
	op = strtok(content, " \n\t");

	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[v].opcode && op)
	{
		if (strcmp(op, opst[v].opcode) == 0)
		{
			opst[v].f(stack, counter);
			return (0);
		}
		v++;
	}
	if (op && opst[v].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
