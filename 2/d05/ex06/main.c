#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char a[100] = "aeulo";
	char b[100] = "aeuloa";
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
}
