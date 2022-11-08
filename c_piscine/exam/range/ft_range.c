#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	*arr;
	int i;

	i = 0;
	size = ft_abs(end - start) + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (start <= end)
	{
		arr[i] = start;
		i++;
		start++;
	}
	while (start >= end)
	{
		arr[i] = start;
		i++;
		start--;
	}
	return (arr);
}

int	main(void)
{
	int start = 0;
	int end = -3;
	int size = ft_abs(end - start) + 1;
	int *arr;
	int i = 0;

	arr = ft_range(start, end);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;;
	}	
	return (0);
}
