#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - linked list
 * @head: parameter
 * @str: parameter
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int lon = 0;

	while (str[lon])
		lon++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lon;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
