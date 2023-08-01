#include "lists.h"

/**
 * free_listint2 - A function that fress a lsit and sets head to NULL
 * @head: A pointer to listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
