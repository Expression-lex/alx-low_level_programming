#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function to return the number of elements in a list
 * @h: A pointer to listint_t structure
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
