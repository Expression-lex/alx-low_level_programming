#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node from a list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		delnode = temp;
		delnode = delnode->next;
		temp->next = delnode->next;
		free(delnode);
	}
	return (1);
}
