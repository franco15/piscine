/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 16:20:50 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/14 16:20:53 by lfranco-         ###   ########.fr       */
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
		print_line(x, 'A', 'B', 'A');
		y--;
	}
	while (y > 1)
	{
		print_line(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 0)
	{
		print_line(x, 'C', 'B', 'C');
	}
}
