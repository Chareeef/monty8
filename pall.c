#include "monty.h"

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: head
 * @line_number: unused
 */

void	pall(stack_t **stack, unsigned int line_number)
{
	stack_t	*head;
	(void) line_number;

	head = *stack;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
