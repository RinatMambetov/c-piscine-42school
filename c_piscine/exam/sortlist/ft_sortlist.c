#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int	func(int *a, int *b)
{
	return (*a <= *b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int *, int *))
{
	int	*temp;
	t_list	*temp_list;
	
	temp_list = lst;
	while (lst -> next)
	{
		if ((*cmp)(lst -> data, lst -> next -> data) == 0)
		{
			temp = lst -> data;
			lst -> data = lst -> next -> data;
			lst -> next -> data = temp;
			lst = temp_list;
		}
		else
			lst = lst -> next;
	}
	lst = temp_list;
	return (lst);
}

t_list	*ft_create_elem(int *data)
{
	t_list *lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst -> data = data;
	lst -> next = NULL;
	return (lst);
}

int	main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	int a = 2;
	int b = -3;
	int c = 0;

	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	lst1 = ft_create_elem(pa);
	lst2 = ft_create_elem(pb);
	lst3 = ft_create_elem(pc);
	lst1 -> next = lst2;
	lst2 -> next = lst3;
	sort_list(lst1, &func);
	while (lst1)
	{
		printf("%d ", *(lst1 -> data));
		lst1 = lst1 -> next;
	}
	return (0);
}
