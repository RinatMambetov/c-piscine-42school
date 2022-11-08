#include <unistd.h>

int	ft_to_lower(char a, char b)
{
	if (a != ' ' && a != '\t')
		if (b >= 'A' && b <= 'Z')
			return (1);
	return (0);
}

int	ft_to_upper(char a, char b)
{
	if (a == ' ' || a == '\t')
		if (b >= 'a' && b <= 'z')
			return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (av[i][0] >= 'a' && av[i][0] < 'z')
					av[i][0] -= 32;
				if (ft_to_lower(av[i][j], av[i][j + 1]))
					av[i][j + 1] += 32;
			   	else if (ft_to_upper(av[i][j], av[i][j + 1]))
					av[i][j + 1] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}		
	}
	else
		write(1, "\n", 1);
	return (0);
}
