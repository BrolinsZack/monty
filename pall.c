#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @num: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *j;
	(void)num;

	j = *head;
	if (j == NULL)
		return;
	while (j)
	{
		printf("%d\n", j->n);
		j = j->next;
	}
}
