#include "lists.h"
/**
 * list_len_recursion - A function that gets the number of nodes of linked
 * @h: head of linked
 * Return: number of nodes as size_t
 */
size_t list_len_recursion(const list_t *h)
{
	if (h != NULL)
		return (1 + list_len_recursion(h->next));
}
