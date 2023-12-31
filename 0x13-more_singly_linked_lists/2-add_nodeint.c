#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: An interger data to put into the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = temp;
	return (*head);
}
