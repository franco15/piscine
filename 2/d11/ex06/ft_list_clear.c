/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:28:12 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/25 16:28:13 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *next;

	elem = *begin_list;
	while (elem)
	{
		next = elem->next;
		free(elem);
		elem = next;
	}
	*begin_list = 0;
}
