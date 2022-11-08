/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:38:04 by greita            #+#    #+#             */
/*   Updated: 2021/09/14 09:49:00 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_error(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	print_file(int ac, char **av)
{
	char buffer;
	int	file;
	int	i;

	i = 1;
	while (i < ac)
	{
		file = open(av[1], O_RDONLY);
		if (file >= 0)
		{
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		else
		{
			print_error("Cannot read file.\n");
		}
		close(file);
		i++;
	}
}
