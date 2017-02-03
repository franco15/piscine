#include <stdio.h>
int	ft_atoi(char *str)
{
	int i;
	int n;
	int r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 11 || str[i] == 13 ||
			str[i] == 12)
			i++;
		if (str[i] < 48 || str[i] > 57)
		{
			if (str[i] == 45)
				n = -1;
		}
		else
			r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (r * n);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
}