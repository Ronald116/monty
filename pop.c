#include "monty.h"
/**
 * pop -a ftn that  prints the top
 * @head: stack head
 * @data: value
 * Return: no return
*/
void pop(stack_t **head, unsigned int data)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", data);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
