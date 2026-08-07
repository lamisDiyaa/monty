#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *copy;
	(void)counter;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	(*head)->prev = copy;
	copy->prev = NULL;
	(*head) = copy;
}
