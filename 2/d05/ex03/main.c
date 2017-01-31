#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char a[100] = "que paso";
	char b[100] = "";
	printf("%s\n", ft_strcpy(b, a));
	printf("%s\n", strcpy(b, a));
}
