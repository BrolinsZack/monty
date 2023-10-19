#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int num)
{
	stack_t *j;
	int len = 0, aux;

	j = *head;
	while (j)
	{
		j = j->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	if (j->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = j->next->n % j->n;
	j->next->n = aux;
	*head = j->next;
	free(j);
}
