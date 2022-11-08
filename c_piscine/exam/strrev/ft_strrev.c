#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char temp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	int i;
	i = 0;

	char str[] = "asd1234567qwe";
	int len = ft_strlen(str);
	char *res = (char *)malloc(sizeof(char) * len);
	res = ft_strrev(str); 
	printf("%s\n", res);
	return (0);
}
