#include <stdio.h>
int	ft_atoi(char *str);
/*void ft_putchar(char c)
{
	write(1, &c, 1);
}*/

int main (void)
{
	char c;

	c = ft_atoi("5952");
	printf("%d\n", c);
}