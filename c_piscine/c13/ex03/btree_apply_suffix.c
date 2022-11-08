/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:04:39 by greita            #+#    #+#             */
/*   Updated: 2021/09/16 10:08:03 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root -> left)
			btree_apply_suffix(root -> left, applyf);
		if (root -> right)
			btree_apply_suffix(root -> right, applyf);
		(*applyf)(root -> item);
	}
}
