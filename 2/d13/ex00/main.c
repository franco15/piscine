#include <stdio.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item);

int main(void)
{
	t_btree *newelem;

	newelem = btree_create_node("newelem");
	printf("%s\n", newelem->item);
}