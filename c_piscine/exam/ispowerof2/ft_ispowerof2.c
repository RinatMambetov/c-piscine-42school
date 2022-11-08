#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;
	
	i = 1;
	while (i < 4294967295)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", is_power_of_2(511));
	return (0);
}
