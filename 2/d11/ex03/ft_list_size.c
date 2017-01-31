/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 00:11:26 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/25 00:11:29 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*newelem;
	int		l;

	l = 0;
	newelem = begin_list;
	while (newelem)
	{
		newelem = newelem->next;
		l++;
	}
	return (l);
}
