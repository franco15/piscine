/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrencia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 11:29:21 by jfrencia          #+#    #+#             */
/*   Updated: 2017/01/15 13:03:35 by jfrencia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	if (x > 0)
	{
		ft_putchar(left);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x > 0)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		print_line(x, '/', '*', '\\');
		y--;
	}
	while (y > 1)
	{
		print_line(x, '*', ' ', '*');
		y--;
	}
	if (y > 0)
	{
		print_line(x, '\\', '*', '/');
	}
}
