/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 00:36:36 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/20 00:36:38 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	i = 0;
	k = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i++;
			j = 1;
		}
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n' || str[i] == '\0')
		{
			k += (j == 1);
			j = 0;
			i++;
		}
	}
	return (k);
}

int		ft_strlen(int i, char *str)
{
	int l;

	l = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		i++;
		l++;
	}
	return (l);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**c;

	i = 0;
	j = 0;
	if ((c = malloc(sizeof(char*) * (count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{
			k = 0;
			if ((c[j] = malloc(sizeof(char) * ft_strlen(i, str) + 1)) == NULL)
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				c[j][k++] = str[i++];
			c[j++][k] = '\0';
		}
	}
	c[j] = NULL;
	return (c);
}
