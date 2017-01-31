/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 22:47:19 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/26 22:47:20 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *newelem;

	newelem = (t_btree*)malloc(sizeof(t_btree));
	if (newelem)
	{
		newelem->left = 0;
		newelem->right = 0;
		newelem->item = item;
	}
	return (newelem);
}
