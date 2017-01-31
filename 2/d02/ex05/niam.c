#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void numbers(char a, char b, char c, char d)
{
	if ((a == '9' && b == '9') && (c == '9' && d == '9'))
	{
		return;
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*void last_digits(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
}*/

/*void coma_spaces(char a, char b)
{
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}*/

int main(void)
{
	char a[];
	char b[];
	int i;

	a = "00";
	b = "00";
	while (i != 100)
	{
		ft_putchar(a);
		a++;
		i++;
	}

	/*
	while (a <= '9')
	{
		//numbers(a, b, c, d);
		while (b <= '9')
		{
			//numbers(a, b, c, d);
			while (c <= '9')
			{
				//last_digits(a, b, c, d);
				while (d <= '9')
				{
					numbers(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			d = b;
			c = '0';
			b++;
		}
		d = a;
		c = a;
		b = '0';
		a++;
	}*/
}