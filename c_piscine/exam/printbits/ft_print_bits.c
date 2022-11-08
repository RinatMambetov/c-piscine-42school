#include <unistd.h>
#include <stdio.h>

void	ft_print_bits(unsigned char octet)
{
	int	i;
	char arr[8];

	i = 0;
	while (i < 8)
	{
		arr[i] = octet % 2 + '0';
		octet /= 2;
		i++;
	}
	while (i > 0)
	{
		write(1, &arr[i - 1], 1);
		i--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_bits(128);
	ft_print_bits(129);
	ft_print_bits(25);
	ft_print_bits(0);
	ft_print_bits(255);
	return (0);
}
