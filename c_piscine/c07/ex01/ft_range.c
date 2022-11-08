/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:50:44 by greita            #+#    #+#             */
/*   Updated: 2021/09/09 16:24:12 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*rg;
	int	i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	len = max - min;
	rg = (int *)malloc(sizeof(*rg) * len);
	if (rg == (void *)0)
		return ((void *)0);
	while (i < len)
	{
		rg[i] = min + i;
		i++;
	}
	return (rg);
}
