#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at the index of listint.
* @head: data type pointer the head/next node
* @index: data type unsigned int index
* Return: 1 if succed and -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter;
listint_t *tmp_node, *idx_node;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
tmp_node = *head;
*head = (*head)->next;
free(tmp_node);
return (1);
}

for (counter = 0, tmp_node = *head; tmp_node != NULL;
tmp_node = tmp_node->next, counter++)
{
if (counter + 1 == index)
{
idx_node = tmp_node->next;
if (idx_node != NULL)
{
tmp_node->next = idx_node->next;
free(idx_node);
return (1);
}
}
}

return (-1);
}
