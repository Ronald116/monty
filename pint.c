#include "monty.h"
/**
 * pint -a ftn that prints the top
 * @head: stack head
 * @number: number
 * Return: no return
*/
void pint(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
