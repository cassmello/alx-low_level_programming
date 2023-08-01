#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer
 * Return: 0 or value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}


