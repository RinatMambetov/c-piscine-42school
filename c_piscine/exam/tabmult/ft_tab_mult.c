#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int nbr;
	int	i;

	i = 1;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			if (i != 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
