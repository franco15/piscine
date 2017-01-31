#include <unistd.h>
#include <stdlib.h>
void	solve();

char	**fill(char **str, char **sudo)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	while (i < 10)
	{
		while (str[i][j])
		{
			if (str[i][j] == '.')
				sudo[i][k] = '-';
			else
				sudo[i][k] = str[i][j];
			j++;
			k++;
		}
		sudo[i][j] = '\0';
		i++;
		j = 0;
		k = 0;
	}	
	return (sudo);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 8)
			ft_putchar(str[i++]);
		else
		{
			ft_putchar(str[i++]);
			ft_putchar(' ');
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	char **c;

	(void)argc;
	i = 0;
	c = (char**)malloc(sizeof(char *) * 10);
	while (i < 10)
	{
		c[i] = (char*)malloc(sizeof(char) * 10);
		i++;
	}
	c[i] = NULL;
	fill(argv, c);
	i = 1;
	while (i < argc)
	{
		ft_putstr(c[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
