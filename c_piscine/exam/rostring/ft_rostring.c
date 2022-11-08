#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char **ft_split(char *str)
{
	char	**res;
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	res = (char **)malloc(sizeof(char *) * 1000);
	if (res == NULL)
		return (NULL);
	while (str[i] <= 32)
		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			j = 0;
			res[s] = (char *)malloc(sizeof(char) * 1000);
			if (res[s] == NULL)
				return (NULL);
			while (str[i] > 32)
			{
				res[s][j] = str[i];
				j++;
				i++;
			}
			s++;
		}
		else 
			i++;
		res[s] = 0;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int	i;
	char **arr;

	i = 1;
	if (ac == 2)
	{
		arr = ft_split(av[1]);
		while (arr[i])
		{
			ft_putstr(arr[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(arr[0]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
