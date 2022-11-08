#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_printhex(int nbr)
{
	char temp;

	if (nbr > 16)
	{
		ft_printhex(nbr / 16);
		ft_printhex(nbr % 16);
	}
	else if (nbr < 10)
	{
		temp = nbr + '0';
		write(1, &temp, 1);
	}
	else if (nbr <= 16)
	{
		temp = nbr + 87;
		write(1, &temp, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_printhex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
