/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 15:17:47 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/14 15:17:51 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int total;

	i = 1;
	total = 1;
	if (nb == 0)
		return (total);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		total = (total * i);
		i++;
		nb--;
	}
	return (total);
}
