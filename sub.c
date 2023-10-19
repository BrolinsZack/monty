#include "monty.h"

/**
 * f_sub - Subtracts top element of stack from next element and push result.
 *
 * @stack: Double pointer to head of stack.
 *
 * @line_number: Line number of current operation.
 *
 * Return: void
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n -= n;
}