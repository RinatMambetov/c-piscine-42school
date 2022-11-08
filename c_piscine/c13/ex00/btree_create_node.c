/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:36:37 by greita            #+#    #+#             */
/*   Updated: 2021/09/16 09:43:29 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (tree)
	{
		tree -> left = ((void *)0);
		tree -> right = ((void *)0);
		tree -> item = item;
	}
	return (tree);
}
