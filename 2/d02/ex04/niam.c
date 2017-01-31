#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void numbers(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void coma_spaces(char c)
{
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int main(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				numbers(a, b, c);
				coma_spaces(a);
				c++;
			}
			b++;
			c = b;
			c++;
		}
		a++;
		b = a;
	}
}

