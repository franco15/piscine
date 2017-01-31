#include <unistd.h>
char *ft_strrev(char *str);
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

int main(void)
{
	char *a;
	char b[] = "hello";

	a = ft_strrev(b);
	ft_putstr(a);

}
