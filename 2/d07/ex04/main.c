#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int main(void)
{
	int i = 0;
	char **b = ft_split_whitespaces("      que iwef sfgd pedo 	how\nyou");
	while (b[i])
	{
		printf("%s", b[i]);
	}
	free(b);
}
