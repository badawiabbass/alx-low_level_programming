#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h);
{
	size_t len = 0;
	const list_t *tmp = h;

	while (tmp)
	{
		len += print_list(tmp->next);
		_putchar(tmp->val);
		tmp = tmp->next;
	}
	return (len);
}
