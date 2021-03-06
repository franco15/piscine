/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 23:34:09 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/13 23:34:11 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int n;
	int r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			if (str[i] == 45)
				n = -1;
			else
				return (0);
		}
		else
		{
			r = (r * 10) + (str[i] - 48);
		}
		i++;
	}
	r = r * n;
	return (r);
}
