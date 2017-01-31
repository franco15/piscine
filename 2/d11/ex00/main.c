#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int main(void)
{
	t_list *elem;

	elem = ft_create_elem("element");
	printf("%s\n", elem->data);
}
