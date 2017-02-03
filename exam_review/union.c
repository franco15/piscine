#include <unistd.h>
int check(char *av, int i)
{
	int j;

	j = 0;
	if (j < i)
	{
		while (j < i)
		{
			if (av[j] == av[i])
				return (0);
			j++;
		}
	}
	return (1);
}

int check3(char *av1, char av2)
{
	int j;

	j = 0;
	while (av1[j] != '\0')
	{
		if (av2 == av1[j])
			return (0);
		j++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 3 && av[1][i] && av[2][j])
	{
		while (av[1][i] != '\0')
		{
			if (check(av[1], i) == 1)
			{
				j = 0;
				while (av[2][j])
				{
					if (av[1][i] == av[2][j])
					{
						write(1, &av[1][i], 1);
						break;
					}
					else
					{
						write(1, &av[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (check(av[2], i) == 1)
			{
				if (check3(av[1], av[2][i]) == 1)
				{
					write(1, &av[2][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}