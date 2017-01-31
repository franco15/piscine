/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:16:02 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/18 21:16:04 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		loc(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
		i++;
	return (i);
}

int		los(int argc, char **argv)
{
	int i;
	int l;

	i = 1;
	l = 0;
	if (argc < 1)
		return (0);
	while (argc > 1)
	{
		while (argv[i])
			l = l + (loc(argv[i++]));
		argc--;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	j = 1;
	k = 0;
	s = (char*)malloc(sizeof(*s) * ((los(argc, argv)) + (argc - 1)));
	while (argc > 1)
	{
		i = 0;
		while (argv[j][i])
		{
			s[k] = argv[j][i];
			k++;
			i++;
		}
		s[k] = '\n';
		k++;
		argc--;
		j++;
	}
	k--;
	s[k] = '\0';
	return (s);
}
