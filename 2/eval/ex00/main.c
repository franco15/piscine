/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:45:42 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/28 15:45:44 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	eval_expr(char *str)
{
	int i;

	i = 0;
	return (firestops(str, i));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
