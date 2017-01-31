/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:53:25 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/18 16:53:27 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arrints;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	else
	{
		arrints = (int*)malloc(sizeof(*arrints) * (max - min));
	}
	while (max > min)
	{
		arrints[i] = min;
		i++;
		min++;
	}
	arrints[i] = '\0';
	*range = arrints;
	return (i);
}
