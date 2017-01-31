#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	int n = 1;
	char a[100] = "quepedo";
	char b[100] = "nada";
	printf("%s\n", ft_strncpy(b, a, n));
	printf("%s\n", strncpy(b, a, n));
}
