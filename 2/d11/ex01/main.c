#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int main(void)
{
	t_list *elem;

	elem = ft_create_elem("dfs");
	ft_list_push_back(&elem, "sup");
	printf("%s\n", elem->next->data);
}