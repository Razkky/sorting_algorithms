#include "sort.h"
/**
 * insertion_sort_list - sort linked list using insertion sort
 * @list: pointer to head of the link list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *loop;

	if (!list || !*list || !(*list)->next)
		return;
	tmp = (*list)->next;
	while (tmp)
	{
		loop = tmp;
		while (loop != NULL && loop->prev != NULL)
		{
			if (loop->prev->n > loop->n)
			{
				swap(loop->prev, loop);
				if (!loop->prev)
					*list = loop;
				print_list(*list);
			}
			else
				loop = loop->prev;
		}
		tmp = tmp->next;
	}
}
/**
 * swap - swap nodes
 * @back: first node
 * @ahead: second node
 */
void swap(listint_t *back, listint_t *ahead)
{
	if (back->prev)
		back->prev->next = ahead;
	if (ahead->next)
		ahead->next->prev = back;
	back->next = ahead->next;
	ahead->prev = back->prev;
	back->prev = ahead;
	ahead->next = back;
}
