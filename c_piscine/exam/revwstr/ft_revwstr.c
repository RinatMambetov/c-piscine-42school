#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char	**ft_split(char *str)
{
	char **arr;
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	arr = (char **)malloc(sizeof(char *) * 100);
	if (arr == NULL)
		return (NULL);
//	while (str[i] <= 32)
//		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			j = 0;
			arr[s] = (char *)malloc(sizeof(char) * 100);
			if (arr[s] == NULL)
				return (NULL);
			while (str[i] > 32)
			{
				arr[s][j] = str[i];
				i++;
				j++;
			}
			arr[s][j] = '\0';
			s++;
		}
		else
			i++;
	}
	arr[s] = 0;
	return (arr);
}

int	main(int ac, char **av)
{
	char **arr;
	int	len;

	len = 0;
	if (ac == 2)
	{
		arr = ft_split(av[1]);
		while (arr[len])
			len++;
		len--;
		while (len >= 0)
		{
			ft_putstr(arr[len]);
			if (len > 0)
				write(1, " ", 1);
			len--;
		}
		write(1, "\n", 1);
		free(arr);
	}
	else
		write(1, "\n", 1);
	return (0);
}
