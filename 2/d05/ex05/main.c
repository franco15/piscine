#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char a[100] = "qu epedo";
	char b[100] = "ped";
	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
}
