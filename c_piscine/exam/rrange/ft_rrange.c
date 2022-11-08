#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_rrange(int start, int end)
{
	int len;
	int *arr;
	int temp;
	int i;

	temp = end;
	len = ft_abs(end - start) + 1;
	arr = (int *)malloc(sizeof(*arr) * len);
	i = 0;
	while (end <= start)
	{
		arr[i] = end;
		end++;
		i++;
	}
	i = 0;
	end = temp;
	while (end >= start)
	{
		arr[i] = end;
		end--;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int i = 0;
	int start = 0;
	int end = -3;
	int len = ft_abs(end - start) + 1;
	int *arr = ft_rrange(start, end);
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
