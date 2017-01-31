/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:39:45 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/25 22:39:46 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (!list_ptr)
		return ;
	while (list_ptr)
	{
		if ((cmp(list_ptr->data, data_ref)) == 0)
			f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
