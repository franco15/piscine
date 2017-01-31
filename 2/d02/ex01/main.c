#include <unistd.h>
void	ft_print_reverse_alphabet(void);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main(void)
{
	char c;

	c = 'z';
	while(c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}*/
int main(void)
{
	ft_print_reverse_alphabet();
}