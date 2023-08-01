#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: head parameter
 * Return: If the list is not looped - 0.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ObjectA, *ObjectB;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ObjectA = head->next;
	ObjectB = (head->next)->next;

	while (ObjectB)
	{
		if (ObjectA == ObjectB)
		{
			ObjectA = head;
			while (ObjectA != ObjectB)
			{
				nodes++;
				ObjectA = ObjectA->next;
				ObjectB = ObjectB->next;
			}

			ObjectA = ObjectA->next;
			while (ObjectA != ObjectB)
			{
				nodes++;
				ObjectA = ObjectA->next;
			}

			return (nodes);
		}

		ObjectA = ObjectA->next;
		ObjectB = (ObjectB->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
