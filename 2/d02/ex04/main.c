#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		while (n2 <= '8')
			{
				while (n3 <= '9')
				{
					ft_putchar(n1);
					ft_putchar(n2);
					ft_putchar(n3);
					if (n1 != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					n3++;
				}
				n2++;
			}
			n1++;
	}

	/*char n[3] = {'0', '1', '2'};

	while (n[0] <= '7')
	{
		while (n[1] <= '8')
		{
			while (n[2] <= '9')
			{
				ft_putchar(n[0]);
				ft_putchar(n[1]);
				ft_putchar(n[2]);
				if (n[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				n[2]++;
			}
			n[1]++;
			n[2] = n[1];
			n[2]++;
		}
		n[0]++;
		n[1] = n[0];
	}*/

}
