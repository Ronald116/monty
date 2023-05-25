#include "monty.h"
/**
  *sub- a ftn to perform sustration
  *@head: stack head
  *@data: value
  *Return: no return
 */
void sub(stack_t **head, unsigned int data)
{
	stack_t *tmp;
	int sus, nodes;

	tmp = *head;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sus = tmp->next->n - tmp->n;
	tmp->next->n = sus;
	*head = tmp->next;
	free(tmp);
}
