This 0x19. C - Stacks, Queues - LIFO, FIFO repo

Data structures
Please use the following data structures for this project. Don’t forget to include them in your header file.

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
  * @n: integer
   * @prev: points to the previous element of the stack (or queue)
    * @next: points to the next element of the stack (or queue)
     *
      * Description: doubly linked list node structure
       * for stack, queues, LIFO, FIFO
        */
	typedef struct stack_s
	{
	        int n;
		        struct stack_s *prev;
			        struct stack_s *next;
				} stack_t;
				/**
				 * struct instruction_s - opcode and its function
				  * @opcode: the opcode
				   * @f: function to handle the opcode
				    *
				     * Description: opcode and its function
				      * for stack, queues, LIFO, FIFO
				       */
				       typedef struct instruction_s
				       {
				               char *opcode;
					               void (*f)(stack_t **stack, unsigned int line_number);
						       } instruction_t;
						       Compilation & Output
						       Your code will be compiled this way:
						       $ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
						       Any output must be printed on stdout
						       Any error message must be printed on stderr
						       Here is a link to a GitHub repository that could help you making sure your errors are printed on stderr


0. push, pall
mandatory
Implement the push and pall opcodes.

The push opcode

The opcode push pushes an element to the stack.

Usage: push <int>
where <int> is an integer
if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number in the file
You won’t have to deal with overflows. Use the atoi function
The pall opcode

The opcode pall prints all the values on the stack, starting from the top of the stack.

Usage pall
Format: see example
If the stack is empty, don’t print anything

1. pint
mandatory
Implement the pint opcode.

The pint opcode

The opcode pint prints the value at the top of the stack, followed by a new line.

Usage: pint
If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE

2. pop
mandatory
Implement the pop opcode.

The pop opcode

The opcode pop removes the top element of the stack.

Usage: pop
If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE

3. swap
mandatory
Implement the swap opcode.

The swap opcode

The opcode swap swaps the top two elements of the stack.

Usage: swap
If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE

4. add
mandatory
Implement the add opcode.

The add opcode

The opcode add adds the top two elements of the stack.

Usage: add
If the stack contains less than two elements, print the error message L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
The top element of the stack contains the result
The stack is one element shorter