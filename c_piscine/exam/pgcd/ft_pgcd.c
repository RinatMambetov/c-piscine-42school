#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int a;
	int b;
	int	i;
	int res;

	i = 1;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (i < a || i < b)
		{
			if (a % i == 0 && b % i == 0)
				res = i;
			i++;
		}
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
