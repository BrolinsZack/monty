#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	aux = j->n + j->next->n;
	j->next->n = aux;
	*head = j->next;
	free(j);
}
