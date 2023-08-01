#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * @head: A pointer to listint_t structure
 * Return: The head node datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
