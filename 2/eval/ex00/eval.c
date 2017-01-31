/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:34:50 by lfranco-          #+#    #+#             */
/*   Updated: 2017/01/28 17:34:52 by lfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
	printf("result atoi r = %d\n", r);
	return (r);
}

int parenthesis(char *str, int i)
{
	int c;

	while (str[i] == 32)
		i++;
	printf("paren  1  i = %d\n", i);
	if (str[i] == 40)
	{
		c = firestops(str, i);
		printf("paren  c = %d\n", c);
		i++;
		printf("paren  2  i = %d\n", i);
		if (str[i] == 41)
			i++;
		printf("paren  3  i = %d\n", i);
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
	a = parenthesis(str, i++);
	printf("secops  1  i = %d\n", i);
	printf("secops  a = %d\n", a);
	while (str[i] != '\0')
	{
		i = numbers(str, i);
		printf("secops  2.0  i = %d\n", i);
		while (str[i] == 32)
			i++;
		printf("secops   2  i = %d\n", i);
		if (str[i] != 37 || str[i] != 42 || str[i] != 47)
			return (a);
		sign = str[i];
		i++;
		printf("secops  3  i = %d\n", i);
		b = parenthesis(str, i++);
		//i++;
		printf("secops  4  i = %d\n", i);
		printf("secops  b = %d\n", b);
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
	a = secops(str, i++);
	printf("fire  1  i = %d\n", i);
	printf("fire  a = %d\n", a);
	while (str[i] != '\0')
	{
		i = numbers(str, i);
		printf("fire  2.0  i = %d\n", i);
		while (str[i] == 32)
			i++;
		printf("fire  2  i = %d\n", i);
		printf("fire  2.1  sign = %c\n", str[i]);
		if (str[i] != '+' || str[i] != '-')
			return (a);
		sign = str[i];
		printf("%c\n", sign);
		++i;
		printf("fire  3  i = %d\n", i);
		b = secops(str, i++);
		//i++;
		printf("fire  4  i = %d\n", i);
		printf("fire  b = %d\n", b);
		if (sign == 45)
			a += b;
		else
			a -= b;
	}
	printf("fire  a = %d\n", a);
	return (a);
}
