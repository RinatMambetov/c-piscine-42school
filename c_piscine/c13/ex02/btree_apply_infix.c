/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:53:31 by greita            #+#    #+#             */
/*   Updated: 2021/09/16 10:03:14 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root -> left)
			btree_apply_infix(root -> left, applyf);
		(*applyf)(root -> item);
		if (root -> right)
			btree_apply_infix(root -> right, applyf);
	}
}
