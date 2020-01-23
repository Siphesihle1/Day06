int		ft_putnbr(int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
		return (0);
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (0);
}
