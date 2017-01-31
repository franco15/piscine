int numbers(char *str, int i)
{
	while (str[i] == 32)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	return (i);
}

int	ft_atoimod(char *str, int i)
{
	int r;

	r = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	printf("%d\n", r);
	return (r);
}

int parenthesis(char *str, int i)
{
	int c;

	while (str[i] == 32)
		i++;
	if (str[i] == 40)
	{
		printf("%d\n", i);
		c = firestops(str, i);
		printf("%d\n", c);
		i++;
		if (str[i] == 41)
			i++;
		return (c);
	}
	return (ft_atoimod(str, i));
}

int secops(char *str, int i)
{
	//int i;
	int a;
	int b;
	char sign;

	//i = 0;
	printf("%d\n", i);
	a = parenthesis(str, i++);
	printf("%d\n", a);
	while (str[i] != '\0')
	{
		i = numbers(str, i);
		while (str[i] == 32)
			i++;
		if (str[i] != 37 || str[i] != 42 || str[i] != 47)
			return (a);
		sign = str[i];
		i++;
		printf("%d\n", i);
		b = parenthesis(str, i++);
		//i++;
		printf("%d\n", b);
		if (sign == 47)
			a /= b;
		else if (sign == 42)
			a *= b;
		else
			a %= b;
	}
	return (a);
}

int firestops(char *str, int i)
{
	//int i;
	int a;
	int b;
	char sign;

	//i = 0;
	printf("%d\n", i);
	a = secops(str, i++);
	printf("%d\n", a);
	while (str[i] != '\0')
	{
		i = numbers(str, i);
		while (str[i] == 32)
			i++;
		if (str[i] != 45 || str[i] != 43)
			return (a);
		sign = str[i];
		i++;
		printf("%d\n", i);
		b = secops(str, i++);
		//i++;
		printf("%d\n", b);
		if (sign == 45)
			a += b;
		else
			a -= b;
	}
	printf("%d\n", a);
	return (a);
}
