/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 11:00:34 by greita            #+#    #+#             */
/*   Updated: 2021/09/05 11:00:37 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putchar(char c);

void	ft_print_ln(int w, char ch1, char ch2, char ch3)
{
	int	i;

	i = 1;
	while (i <= w)
	{
		if (i == 1)
			ft_putchar(ch1);
		else if (i <= (w - 1))
			ft_putchar(ch2);
		else if (i == w)
			ft_putchar(ch3);
		i++;
	}
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	int	i;

	i = 1;
	if ((x <= INT_MAX) && (x >= 0) && (y <= INT_MAX) && (y >= 0))
	{
		while (i <= y)
		{
			if (i == 1)
				ft_print_ln(x, 'A', 'B', 'A');
			else if (i <= (y - 1))
				ft_print_ln(x, 'B', ' ', 'B');
			else if (i == y)
				ft_print_ln(x, 'C', 'B', 'C');
			i++;
		}
	}
}
