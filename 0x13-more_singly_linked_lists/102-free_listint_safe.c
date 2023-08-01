#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer parameter
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int var;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		var = *h - (*h)->next;
		if (var > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
