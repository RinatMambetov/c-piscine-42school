#include <stdlib.h>
#include <stdio.h>

int	ft_nbrlen(int nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_div(int nbr)
{
	int res;
	int	i;
	int	len;

	i = 0;
	res = 1;
	len = ft_nbrlen(nbr);
	if (nbr < 0)
		len--;
	while (i < len - 1)
	{
		res *= 10;
		i++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	int	len;
	int	i;
	char *res;
	int div;

	i = 0;
	len = ft_nbrlen(nbr);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		res[i] = '-';
		i++;
	}
	if (nbr == -2147483648)
		return ("-2147483648");
	div = ft_div(nbr);
	while (i < len)
	{
		res[i] = (nbr / div) % 10 + '0';
		i++;
		div /= 10;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	int nbr = 7;
	printf("%s\n", ft_itoa(nbr));
	return (0);
}
