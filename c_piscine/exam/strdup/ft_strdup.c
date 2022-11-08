#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(const char *s1)
{
	char	*result;
	int		len;
	int	i;

	i = 0;
	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	printf("%s\n", ft_strdup("asd"));
	return (0);
}
