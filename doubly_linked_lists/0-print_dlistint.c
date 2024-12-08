#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that print all new nodes
 * @h: pointer to the dlistint_t list to print
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

if (h == NULL)
{
return (s);
}
while (h->prev != NULL)
{
h = h->prev;
}
while (h)
{
printf("%d\n", h->n);
s++;
h = h->next;
}
return (s);
}
