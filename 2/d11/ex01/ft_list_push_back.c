/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:54:01 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/24 21:54:03 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *newelem;

	newelem = *begin_list;
	if (newelem)
	{
		while (newelem->next)
			newelem = newelem->next;
		newelem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
