/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 19:14:32 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/25 19:14:34 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*elem;
	int		i;
	int		j;

	i = 0;
	j = nbr;
	elem = begin_list;
	if (!elem)
		return (0);
	while (elem)
	{
		if (i == j)
			return (elem);
		i++;
		elem = elem->next;
	}
	return (0);
}
