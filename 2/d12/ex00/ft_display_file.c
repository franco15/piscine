/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 04:50:13 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/26 04:50:14 by lfranco-         ###   ########.fr       */
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
	int file;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			ft_putstr("File doesn't exist.\n");
			return (1);
		}
		ft_display(file);
		close(file);
	}
	return (0);
}
