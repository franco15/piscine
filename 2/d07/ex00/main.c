#include <stdio.h>
#include <stdlib.h>

void	*ft_strdup(char *src);

int main(void)
{
	char *a = "qwertyui";
	char *b = ft_strdup(a);
	printf("%s\n", b);
	free(b);
}