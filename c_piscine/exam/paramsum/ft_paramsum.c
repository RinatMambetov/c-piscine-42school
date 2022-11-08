#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char temp;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		temp = nbr + '0';
		write(1, &temp, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(ac - 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
