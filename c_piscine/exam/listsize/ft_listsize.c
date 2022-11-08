#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_listsize(t_list *begin_list)
{
	t_list *lst;
	int count;

	count = 0;
	lst = begin_list;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}

t_list *ft_create_elem(void *data)
{
	t_list *temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp -> data = data;
	temp -> next = NULL;
	return (temp);
}

int	main(void)
{
	t_list *lst;
	lst = ft_create_elem("1");
	lst -> next = ft_create_elem("2");
	lst -> next -> next = ft_create_elem("4");
	printf("%d\n", ft_listsize(lst));
	return (0);
}
