#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	int	i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	const char str[] = "asdfgh";
	const char set[] = "zf";

	printf("%zu %lu\n", ft_strcspn(str, set), strcspn(str, set));
	return (0);
}
