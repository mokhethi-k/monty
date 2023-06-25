#include "monty.h"
/**
  *_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: returns nothing
 */
void _sub(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int sus, nodes;

	tmp = *head;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
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
