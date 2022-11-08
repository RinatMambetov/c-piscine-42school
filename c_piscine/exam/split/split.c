#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char	**res;
	int	i;
	int	res_i;
	int j;

	i = 0;
	res_i = 0;
	res = (char **)malloc(sizeof(char *) * 1000);
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] <= 32)
			i++;
		if (str[i] > 32)
		{
			res[res_i] = (char *)malloc(sizeof(char) * 1000);
			if (res[res_i] == NULL)
				return (NULL);
			j = 0;
		}
		while (str[i] > 32)
		{
			res[res_i][j] = str[i];
			j++;
			i++;
		}
		res[res_i][j] = '\0';
		res_i++;
		i++;
	}
	res[res_i] = NULL;
	return (res);
}

int	main(void)
{
	char *str = "  asd qwe zx'c   ";
	char **arr;
	int i;

	i = 0;
	arr = ft_split(str);
	while (i < 3)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
