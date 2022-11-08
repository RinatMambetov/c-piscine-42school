#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

t_list	*ft_create_elem(void *data)
{
	t_list *lst;
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst -> data = data;
	lst -> next = NULL;
	return (lst);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list -> data);
		begin_list = begin_list -> next;
	}
}

void	func(void *str)
{
	write(1, &str[1], 1);
}

int	main(void)
{
	t_list *lst1;
	t_list *lst2;
	
	lst1 = ft_create_elem("12");
	lst2 = ft_create_elem("23");
	lst1 -> next = lst2;
	ft_list_foreach(lst1, &func);
	return (0);
}
