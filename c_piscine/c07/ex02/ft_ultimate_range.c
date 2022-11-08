/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:11:26 by greita            #+#    #+#             */
/*   Updated: 2021/09/11 16:11:53 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = (void *)0;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == (void *)0)
		return (-1);
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (i);
}

int	main()
{
	int **a;
	int	i;
	int j;

	i = -5;
	j = 6;
	printf ("%d\n", ft_ultimate_range(a, i, j));
	for (int i = 0; i < j - i; i++)
		printf("%d ", (*a)[i]);
	printf("\n");
	a++;
	ft_ultimate_range(a, 13, 42);
	for (int i = 0; i < 42 - 13; i++)
		printf("%d ", (*a)[i]);
}
