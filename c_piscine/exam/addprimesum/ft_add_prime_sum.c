#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_add_prime_sum(int nbr)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	if (nbr <= 0)
		return (0);
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int	nbr;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		ft_putnbr(ft_add_prime_sum(nbr));
		ft_putchar('\n');
	}
	else
		write(1, "0\n", 2);
	return (0);
}
