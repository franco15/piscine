/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 23:04:28 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/18 23:04:29 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 1;
	while ((argc - 1) > i)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			s = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = s;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (argc > i)
	{
		print_params(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
