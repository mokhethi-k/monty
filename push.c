#include "monty.h"
/**
 * _push - add node to the stack
 * @head: double pointer to stack
 * @counter: line_number
 * Return: returns nothing
*/
void _push(stack_t **head, unsigned int counter)
{
	int node, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	node = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, node);
	else
		addqueue(head, node);
}
