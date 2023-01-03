#include "sort.h"
/**
 *insertion_sort_list - a function that sorts a doubly linked list of integers
 *@list: head of the node
 *Return: non
 */
void insertion_sort_list(listint_t **list)
{

	listint_t *new = *list;
	listint_t *prev = NULL;
	listint_t *next = NULL;
	while (new != NULL)
	{
		next = new->next;
		prev = new->prev;

		while (prev != NULL && prev->n > new->n)
		{

			if (prev->prev != NULL)
			{
				prev->prev->next = new;
			}
			new->prev = prev->prev;
			prev->next = new->next;
			if (new->next != NULL)
			{
				new->next->prev = prev;
			}
			new->next = prev;
			prev->prev = new;

			if (new->prev == NULL)
			{
				*list = new;
			}
			prev = new->prev;
			print_list(*list);
		}
		new = next;
	}
}
