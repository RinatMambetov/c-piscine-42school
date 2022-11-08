#include <stdlib.h>
#include <stdio.h>

void	ft_fprime(int nbr)
{
	int	i;

	i = 2;
	while (i <= nbr)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (i != nbr)
				printf("*");
			nbr /= i;
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int nbr;

	if (ac == 2)
	{
		nbr = atoi(av[1]);
		ft_fprime(nbr);
	}
	return (0);
}
