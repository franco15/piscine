#include <unistd.h>
void ft_putnbr(int nb);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int i = -0;
	ft_putnbr(i);
}
