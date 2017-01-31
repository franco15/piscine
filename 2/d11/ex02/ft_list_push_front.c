/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 00:03:52 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/25 00:03:54 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *newelem;

	if (*begin_list)
	{
		newelem = ft_create_elem(data);
		newelem->next = *begin_list;
		*begin_list = newelem;
	}
	else
		*begin_list = ft_create_elem(data);
}
