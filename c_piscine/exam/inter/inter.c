#include <unistd.h>

int	ft_check_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j] && ft_check_double(av[1], av[1][i], i) 
						&& ft_check_double(av[2], av[1][i], j))
				{
					write(1, &av[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
