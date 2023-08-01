#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer parameter
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = next;
	}

	*head = reverse;

	return (*head);
}
