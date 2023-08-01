#include "lists.h"
#include <stdio.h>

/**
 * recursion_pointer - A function that prints all the elements in the list
 * @h: A pointer to listint
 * Return: the number of nodes
 */

size_t recursion_printer(const listint_t *h)
{
	printf("%d\n", h->n);
	return (1 + recursion_printer(h->next));
}
