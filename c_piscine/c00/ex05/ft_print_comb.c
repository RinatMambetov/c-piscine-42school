/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:18:42 by greita            #+#    #+#             */
/*   Updated: 2021/09/02 21:18:47 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check(char ch1, char ch2, char ch3)
{
	if (ch1 != ch2 && ch2 != ch3 && ch1 != ch3
		&& ch1 < ch2 && ch2 < ch3)
	{
		ft_putchar(ch1);
		ft_putchar(ch2);
		ft_putchar(ch3);
		if (!(ch1 == '7' && ch2 == '8' && ch3 == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	ch1;
	char	ch2;
	char	ch3;

	ch1 = '0';
	ch2 = '0';
	ch3 = '0';
	while (ch1 <= '9')
	{	
		while (ch2 <= '9')
		{
			while (ch3 <= '9')
			{
				check(ch1, ch2, ch3);
				ch3++;
			}
			ch3 = '0';
			ch2++;
		}
		ch2 = '0';
		ch1++;
	}
}
