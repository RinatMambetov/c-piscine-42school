#include <unistd.h>

int	is_upper(char a, char b)
{
	if (a >= 'a' && a <='z')
	{
		if (b <= 32)
			return (1);
	}
	return (0);
}

int	is_lower(char a, char b)
{
	if (a >= 'A' && a <= 'Z')
	{
		if (b != ' ' && b != '\t')
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (is_upper(av[i][j], av[i][j + 1]))
					av[i][j] -= ' ';
			   	if (is_lower(av[i][j], av[i][j + 1]) && av[i][j + 1] != '\0')
					av[i][j] += ' ';
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
