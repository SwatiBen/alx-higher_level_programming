#include "lists.h"

/**
 * check_cycle - checks linked lists
 * @list: check linkes list
 * Return: 0 if no cycle and else 1
 */
int check_cycle(listint_t *list)
{
	listint_t *sl = list;
	listint_t *ft = list;

	if (!list)
		return(0);

	while (sl && ft && ft->next)
	{
		sl = sl->next;
		ft = ft->next->next;
		if (sl == ft)
			return (1);
	}

	return (0);
}
