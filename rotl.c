#include "monty.h"
/**
  *rotl-a ftn  rotates the stack to the top
  *@head: stack head
  *@data: value
  *Return: no return
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int data)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
