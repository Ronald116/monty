#include "monty.h"

/**
 * mul - a ftn that multiplies the top two elements of the stack
 * @head: stack head
 * @data: line number
 * Return: no return
*/
void mul(stack_t **head, unsigned int data)
{
	stack_t *tmp;
	int len = 0, nN;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	nN = tmp->next->n * tmp->n;
	tmp->next->n = nN;
	*head = tmp->next;
	free(tmp);
}
