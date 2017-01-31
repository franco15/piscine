
int operations_2(char *str, int i)
{
	char a;
	char b;
	char sign;
	int k;

	k = i;
	a = ft_atoimod(str, i);
	while (*str)
	{
		while (str[i] == 32)
			i++;
		while (str[i] >= 48 && str[i] <= 57)
			i++;
		if (str[i] != 45 || str[i] != 43)
			return (a);
		sign = str[i];
		i++;
		b = opstoo(str, i);
		if (sign == 43)
			a += b;
		else
			a -= b;
		i++;
	}
	return (a);
}

int opstoo(char *str, int i)
{
	int a;
	int b;
	char sign;

	a = ft_atoimod(str, i);
	while (str[i] != 41)
	{
		while (str[i] == 32)
			i++;
		a = ft_atoimod(str, i);
		if (str[i] !=  42 || str[i] != 37 || str[i] != 47)
			return (a);
		sign = str[i];
		i++;
		b = operations_2(str, i);
		if (sign == 42)
			a *= b;
		else if (sign == 37)
			a %= b;
		else
			a /= b;
		i++;
	}
	return (a);
}

int operations(char *str, int i, int j)
{
	char a;
	char b;
	char sign;

	a = ft_atoimod(str, i);
	while (j >= i)
	{
		while (str[i] == 32)
			i++;
		while (str[i] >= 48 && str[i] <= 57)
			i++;
		if (str[i] != 45 || str[i] != 43)
			return (a);
		sign = str[i];
		b = opstoo(str, i);
		if (sign == 43)
			a += b;
		else
			a -= b;
		i++;
	}
	return (a);
}

int fclose(char *str, int i)
{
	while (str[i] != 40)
		i--;
	return (i);
}
int fopen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 41)
		i++;
	return (i);
}

char *first(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != 41)
		i++;
	j = i;
	while (str[j] != 40)
		i--;
	str = (char*)malloc(sizeof(char) *(ft_strlen(str) - (j - i)));
	return (str);
}

int next(char *str, char *s, int i, int j, int k)
{
	int a;
	int b;

	b = j;
	if ((a = (operations(str, i, j))) <= 9)
		s[k++] = (a + 48);
	else if ((a = (operations(str, i, j)))> 9 )
	{
		s[k++] = ((a / 10) + 48);
		s[k] = ((a % 10) + 48);
	}
	while (str[k] != 41)
		k++;
	j++;
	while (*s)
	{	
		s[k] = str[j];
		k++;
		j++;
	}
	while (--b > 0)
		a = start(s);
	return (a);
}

int start(char *str)
{
	char *s;
	int i;
	int j;
	int k;
	int r;

	s = first(str);
	i = fopen(str);
	j = fclose(str, i);
	k = 0;
	while (i < j)
	{
		s[k] = str[i];
		i++;
		k++;
	}
	r = next(str, s, i, j, k);
	return (r);
}
