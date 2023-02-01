#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	
	if (*head == NULL)
	
	*head = new;
	
	else
	{
		last = *head;
	while (last->next != NULL)
	{
	       last = last->next;
	}
	last->next = new;
	return (*head);
}
