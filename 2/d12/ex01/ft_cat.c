/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 05:11:51 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/26 05:11:53 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display(int file)
{
	char	x;
	int		valid;

	valid = read(file, &x, 1);
	while (valid)
	{
		write(1, &x, 1);
		valid = read(file, &x, 1);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int file;

	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			file = open(argv[i], O_RDONLY);
			if (file == -1)
			{
				ft_putstr("cat: ");
				ft_putstr(argv[i]);
				ft_putstr(": No such file or directory\n");
			}
			else
				ft_display(file);
			close(file);
			i++;
		}
	}
}
