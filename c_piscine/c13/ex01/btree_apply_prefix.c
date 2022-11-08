/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:45:54 by greita            #+#    #+#             */
/*   Updated: 2021/09/16 09:50:10 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		(*applyf)(root -> item);
		if (root -> left)
			btree_apply_prefix(root -> left, applyf);
		if (root -> right)
			btree_apply_prefix(root -> right, applyf);
	}
}
