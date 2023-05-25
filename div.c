#include "monty.h"

/**
 * _div - divides the top two elements of the stack.
 * @head: stack head
 * @data: line_number
 * Return: no return
*/
void _div(stack_t **head, unsigned int data)
{
	stack_t *tmp;
	int len = 0, a;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = tmp->next->n / tmp->n;
	tmp->next->n = a;
	*head = tmp->next;
	free(tmp);
}
