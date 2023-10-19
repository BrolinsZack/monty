#include "monty.h"

/**
 * f_pall - Print all values on `stack' starting from the top.
 *
 * @stack: Double pointer to head of stack.
 *
 * @line_number: line number being executed from script file.
 *
 * Return: void
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
