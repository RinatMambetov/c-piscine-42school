#include <unistd.h>
#include <stdio.h>

int	matching(char a, char b)
{
	if (a == '(' && b == ')')
		return (1);
	if (a == '[' && b == ']')
		return (1);
	if (a == '{' && b == '}')
		return (1);
	return (0);	
}

int	brackets(char *str, char *stack)
{
	int	i;
	int	top;

	i = 0;
	top = -1;
//	printf("%d\n", stack[-100]);
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			top++;
			stack[top] = str[i];
		}
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (!stack[top])
				return (0);
			else if (!matching(stack[top], str[i]))
				return (0);
			else
			{
				stack[top] = 0;
				top--;		
			}
		}
		i++;
	}
	if (stack[top] == 0)
	{
//		printf("%d\n", top);
//		printf("%d\n", stack[top]);
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char stack[512];
	int i;

//	printf("%d\n", stack[1000]);
	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (brackets(av[i], stack))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
