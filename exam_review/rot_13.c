#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char c;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else if (av[1])
	{
		while (av[1][i] != '\0')
		{
			if ((av[1][i] >= 65 && av[1][i] <= 77) || (av[1][i] >= 97 &&
					av[1][i] <= 109))
			{
				c = av[1][i] + 13;
				write(1, &c, 1);
				i++;
			}
			else if ((av[1][i] >= 78 && av[1][i] <= 90) || (av[1][i] >= 110 &&
					av[1][i] <= 122))
			{
				c = av[1][i] - 13;
				write(1, &c, 1);
				i++;
			}
			else
			{
				c = av[1][i];
				write(1, &c, 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
}