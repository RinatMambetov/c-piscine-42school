#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	n;

	n = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{	
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}

int	main(void)
{
	printf("%d %d\n", ft_atoi("123"), atoi("123"));
	printf("%d %d\n", ft_atoi("	-123"), atoi("	-123"));
	printf("%d %d\n", ft_atoi("  +123"), atoi("  +123"));
	printf("%d %d\n", ft_atoi("  -+-123"), atoi("  -+-123"));
	printf("%d %d\n", ft_atoi("	1a23"), atoi("	1a23"));

	return (0);
}
