#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - entry point
* @argc: number of arguments
* @argv: argument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *inputs;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		inputs = NULL;
		read_line = getline(&inputs, &size, file);
		bus.content = inputs;
		counter++;
		if (read_line > 0)
		{
			execute(inputs, &stack, counter, file);
		}
		free(inputs);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
