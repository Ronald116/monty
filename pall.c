#include "monty.h"

/**
 * pall - prints the stack
 * @head: stack head
 * @data: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int data)
{
	stack_t *h;
	(void)data;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
