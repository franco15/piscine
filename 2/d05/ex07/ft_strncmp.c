/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 19:33:05 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/17 19:33:08 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int m;

	i = 0;
	m = n;
	while (i <= m)
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	return (0);
}
