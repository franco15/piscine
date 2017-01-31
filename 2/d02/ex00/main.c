#include <unistd.h>
void	ft_print_alphabet(void);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

//void ft_print_alphabet(void)
/*int main (void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}	
}*/
int main(void)
{
	ft_print_alphabet();
}
