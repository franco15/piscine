/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 00:47:39 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/12 00:47:43 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_putnbrs(int a, int b)
{
	ft_putchar(a / 10);
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10);
	ft_putchar(b % 10 + '0');
	ft_putchar(' ');
	ft_putchar(',');
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 00;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putnbrs(a, b);
			b++;
		}
		b = a;
		a++;
	}
}
