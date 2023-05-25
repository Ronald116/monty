#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @data: line number
 * Return: no return
*/
void pchar(stack_t **head, unsigned int data)
{
	stack_t *tmp;

	tmp = *head;
	if (!tmp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (tmp->n > 127 || tmp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
