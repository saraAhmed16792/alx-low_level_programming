#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head ptr to the list
 * Return: num of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
