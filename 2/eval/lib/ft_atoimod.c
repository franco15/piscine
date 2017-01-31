/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:07:43 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/17 11:07:45 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoimod(char *str)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			r = r + (str[i] - 48);
			i++;
		}
		else if (str[i] == 32 || str[i] == 37 || str[i] == 45)
		{
			r = r + str[i];
			i++;
		}
		else if (str[i] == 47 || (str[i] >= 40 && str[i] <= 43))
		{
			r = r + str[i];
			++i;
		}
	}
	return (r);
}
