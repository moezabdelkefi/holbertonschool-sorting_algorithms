#include "sort.h"
/**
 *insertion_sort_list - a function that sorts a doubly linked list of integers
 *@list: variable of doubly linked list
 *Return: non
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		prev = curr->prev;

		while (prev != NULL && prev->n > curr->n)
		{

			if (prev->prev != NULL)
			{
				prev->prev->next = curr;
			}
			curr->prev = prev->prev;
			prev->next = curr->next;
			if (curr->next != NULL)
			{
				curr->next->prev = prev;
			}
			curr->next = prev;
			prev->prev = curr;

			if (curr->prev == NULL)
			{
				*list = curr;
			}
			prev = curr->prev;
			print_list(*list);
		}
		curr = next;
	}
}
