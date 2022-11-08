#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
					len++;
				j++;
			}
			i++;
		}
	}
	if (ft_strlen(av[1]) == len)
	{
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
