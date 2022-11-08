#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					count++;
					break;
				}
				j++;
			}
			i++;
		}
		if (av[1][count] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
