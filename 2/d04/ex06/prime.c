int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < i)
		return (0);
	if (nb == 2)
		return (1);
	if (nb > 2147483647 && nb < -2147483648)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}






int ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 0 || nb == 1 || nb == 4)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb > 2147483647 && nb < -2147483648)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

