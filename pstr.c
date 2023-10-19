#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int num)
{
	stack_t *j;
	(void)num;

	j = *head;
	while (j)
	{
		if (j->n > 127 || j->n <= 0)
		{
			break;
		}
		printf("%c", j->n);
		j = j->next;
	}
	printf("\n");
}
