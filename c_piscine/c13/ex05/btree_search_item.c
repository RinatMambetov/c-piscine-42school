/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:38:21 by greita            #+#    #+#             */
/*   Updated: 2021/09/16 10:55:40 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*result;

	result = (void *)0;
	if (root)
	{
		if (root -> left)
			result = btree_search_item(root -> left, data_ref, cmpf);
		if (!result && cmpf(root -> item, data_ref) == 0)
			result = root -> item;
		if (!result && root -> right)
			result = btree_search_item(root -> right, data_ref, cmpf);
	}
	return (result);
}
