#include "lists.h"

/**
 * free_listint - A function that fress alinked list
 * @head: A pointer to listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
