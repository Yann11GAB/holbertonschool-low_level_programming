#include "lists.h"

/**
 * dlistint_len -  function that returns nodes.
 * @h: point to the dlistint_t list.
 * Return: s
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t s = 0;

if (h == NULL)

return (s);

while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
s++;
h = h->next;
}
return (s);
}
