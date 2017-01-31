/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:29:18 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/18 16:29:21 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arrints;
	int i;

	i = 0;
	if (min < max)
		arrints = (int*)malloc(sizeof(*arrints) * (max - min));
	else
	{
		return (NULL);
	}
	while (max > min)
	{
		arrints[i] = min;
		i++;
		min++;
	}
	arrints[i] = '\0';
	return (arrints);
}
