#include "monty.h"
/**
 * _pall - prints the stack
 * @head: double pointer to the stack
 * @counter: no used
 * Return: returns nothing
*/
void _pall(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
