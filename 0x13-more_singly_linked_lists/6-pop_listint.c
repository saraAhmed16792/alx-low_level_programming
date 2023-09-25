#include "lists.h"

/**
 * pop_listint -  that deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 *  @head: ptr to the 1st element
 *  Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
