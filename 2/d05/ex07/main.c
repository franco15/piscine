#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[100] = "holi";
	char b[100] = "hola";
	printf("%d\n", ft_strncmp(a, b, 4));
	printf("%d\n", strncmp(a, b, 4));
}
