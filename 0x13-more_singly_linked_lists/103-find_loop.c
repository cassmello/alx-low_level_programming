#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head parameter
 * Return: node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Tslow = head;
	listint_t *Hfast = head;

	if (!head)
		return (NULL);

	while (Tslow && Hfast && Hfast->next)
	{
		Hfast = Hfast->next->next;
		Tslow = Tslow->next;
		if (Hfast == Tslow)
		{
			Tslow = head;
			while (Tslow != Hfast)
			{
				Tslow = Tslow->next;
				Hfast = Hfast->next;
			}
			return (Hfast);
		}
	}

	return (NULL);
}

