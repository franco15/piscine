/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:20:03 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/18 16:20:05 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*d;
	int		l;
	int		i;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	d = (char*)malloc(sizeof(*d) * l);
	if (d == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			d[i] = src[i];
			i++;
		}
	}
	d[i] = '\0';
	return (d);
}
