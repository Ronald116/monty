#include "monty.h"
/**
 * pstr -a ftn  prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @data: value
 * Return: no return
*/
void pstr(stack_t **head, unsigned int data)
{
	stack_t *h;
	(void)data;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
