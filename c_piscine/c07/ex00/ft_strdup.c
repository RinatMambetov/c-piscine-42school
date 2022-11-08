/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:28:25 by greita            #+#    #+#             */
/*   Updated: 2021/09/09 16:23:55 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(*src) * (len + 1));
	if (dest == (void *)0)
		return ((void *)0);
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}
