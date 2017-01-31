#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int max = 20;
	int min = 10;
	int *range = NULL;
	int a = ft_ultimate_range(&range, min, max);
	(void)a;
	int i = 0;
	while (range[i] != '\0')
	{
		printf("%d\n", range[i]);
		i++;
	}
}
