#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbrs2(int a, int b, int c, int d)
{
	if (a == 9 && b == 8 && c == 9 && d == 9)
	{
		ft_putchar(a / 10);
		ft_putchar(a % 10 + '0');
		ft_putchar(b / 10);
		ft_putchar(b % 10 + '0');
		ft_putchar(' ');
		ft_putchar(c / 10);
		ft_putchar(c % 10 + '0');
		ft_putchar(d / 10);
		ft_putchar(d % 10 + '0');
	}
	else
		return ;
}

void	ft_putnbrs(int a, int b, int c, int d)
{
	ft_putchar(a / 10);
	ft_putchar(a % 10 + '0');
	ft_putchar(b / 10);
	ft_putchar(b % 10 + '0');
	ft_putchar(' ');
	ft_putchar(c / 10);
	ft_putchar(c % 10 + '0');
	ft_putchar(d / 10);
	ft_putchar(d % 10 + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	repeat(int a, int b, int c, int d)
{
	int i;
	int j;
	int k;

	i = a + b;
	j = c + d;
	k = (i + j) / 2;

	if (i == k)
	{
		ft_putnbrs2(a, b, c, d);
		ft_putnbrs(a, b, c, d);
	}
}

void whiles(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					repeat(a, b, c, d);
					//ft_putnbrs2(a, b, c, d);
					//ft_putnbrs(a, b, c, d);
					d++;
				}
				d = 0;
				c++;
			}
			d = b;
			c = 0;
			b++;
		}
		d = a;
		c = a;
		b = 0;
		a++;
	}
}

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	whiles(a, b, c, d);
}
