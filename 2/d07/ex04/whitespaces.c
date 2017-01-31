#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(int i, char *str)
{
	int l;
	int k;

	l = 0;
	k = 0;
	if (str[0] != '\0' && (str[0] == ' ' || str[0] == '\t' || str[0] == '\n'))
		l++;
	while (str[l] != '\0')
	{
		if (str[l] == ' ' || str[l] == '\t' || str[l] == '\n')
		{
			k++;
			l++;
		}
		if (k == i)
		{
			k = 0;
			while (str[l] != ' ' || str[l] != '\t' || str[l] != '\n' || str[l] == '\0')
			{
				l++;
				k++;
			}
		}
		return (k);
	}
	return (0);
}

int	count_words(char *str)
{
	int i;
	int j;
	int k;

	l = 0;
	i = 0;
	k = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			i++;
			j = 1;
		}
		if (str[l] != ' ' || str[l] != '\t' || str[l] != '\n' || str[l] == '\0')
		{
			k +=  (j == 1);
			j = 0;
			i++;
		}
	}
	return (k);
}

char **allocate(char *str)
{
	char **c;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = count_words(str);
	printf("%d\n", k);
	c = (char**)malloc(sizeof(char *) * (k + 1));
	while (i < k)
	{
		c[i] = (char*)malloc(sizeof(char) * ((ft_strlen(i, str))));
		i++;
	}
	return (c);
}
/*
**c = random value;
*ch = random;

c = stack memory address
c = heap memory address

c = (char **)memory

c[] = "hola"
*ch = "hola"

c[][] = 'h'
**c = 'h'*/

char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **c;

	i = 0;
	j = 0;
	k = 1;
	c = allocate(str);//(char**)malloc(count_words(str) * (sizeof(**c) * (ft_strlen(str))));
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			k++;
			i++;
		}
		else
		{
			c[k][j] = str[i];
			j++;
			i++;
		}
	}
	while (c[k] > 0)
	{
		printf("%s\n", c[k]);
		k--;
	}
	return (c);
}