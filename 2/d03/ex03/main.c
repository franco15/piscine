#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483648 || nb > 2147483647)
		return ;
	else if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
}
