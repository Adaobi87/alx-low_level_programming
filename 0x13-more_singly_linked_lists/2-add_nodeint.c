#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint list
  * @n: interger to be used
  * @head: head of the list
  * Return: address of the new element and NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
