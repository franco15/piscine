/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 19:21:10 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/23 19:21:13 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ret;

	i = 0;
	while (tab[i] != '\0')
		i++;
	ret = (int*)malloc(sizeof(int) * (i + 1));
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
