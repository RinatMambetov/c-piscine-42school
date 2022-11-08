#include <stdio.h>

int	max(int *tab, int len)
{
	int	i;
	int	temp;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}

int	main(void)
{
	int ar[5] = {1, 5, 4, 3, 2};

	printf("%d\n", max(ar, 5));
	return (0);
}
