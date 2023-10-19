#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int num)
{
	stack_t *j;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	*head = j->next;
	free(j);
}
