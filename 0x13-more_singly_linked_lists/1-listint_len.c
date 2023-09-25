#include "lists.h"

/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: head ptr
 * Return: num of elemnts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
