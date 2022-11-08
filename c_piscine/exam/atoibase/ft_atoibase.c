#include <stdio.h>

int	ft_atoibase(const char *str, int str_base)
{
	int	i;
	int	res;
	int n;

	i = 0;
	res = 0;
	n = 1;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * str_base + str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			res = res * str_base + str[i] - 87;
		if (str[i] >= 'A' && str[i] <= 'F')
			res = res * str_base + str[i] - 55;
		i++;
	}
	return (res * n);
}

int	main(void)
{
	printf("%d\n", ft_atoibase("ab", 16));
	printf("%d\n", ft_atoibase("AB", 16));
	printf("%d\n", ft_atoibase("-cd", 16));
	printf("%d\n", ft_atoibase("1110", 2));
	printf("%d\n", ft_atoibase("157", 8));
	return (0);
}
