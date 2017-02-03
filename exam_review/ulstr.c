#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	char c;

	i = 0;
	if (ac == 2 && av[1][i])
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				c = av[1][i] + 32;
				write(1, &c, 1);
			}
			else if (av[1][i] >= 97 && av[1][i] <= 122)
			{
				c = av[1][i] - 32;
				write(1, &c, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}