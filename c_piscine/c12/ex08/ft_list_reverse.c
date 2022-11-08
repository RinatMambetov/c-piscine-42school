/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:50:37 by greita            #+#    #+#             */
/*   Updated: 2021/09/15 16:05:10 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*second;
	t_list	*prev;
	t_list	*current;

	second = (void *)0;
	prev = (void *)0;
	current = *begin_list;
	while (current != (void *)0)
	{
		second = current -> next;
		current -> next = prev;
		prev = current;
		current = second;
	}
	*begin_list = prev;
}
