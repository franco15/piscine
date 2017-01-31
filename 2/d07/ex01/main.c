#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int max = 10;
	int min = 20;
	int *a = ft_range(min, max);
	int i = 0;
	if (a)
	{
		while (a[i])
		{
			printf("%d\n", a[i]);
			i++;
		}
	}
	else
		return (0);
}