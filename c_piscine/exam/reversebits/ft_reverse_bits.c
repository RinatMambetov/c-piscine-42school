#include <stdio.h>

/*
unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		printf("%d ", res);
		i--;
	}
	return (res);
}
*/

unsigned char	reverse_bits(unsigned char octet)
{
	int arr[8];
	int	i;
	unsigned char res;
	int base;

	base = 1;
	res = 0;
	i = 0;
	while (i < 8)
	{
		arr[i] = octet % 2;
		octet /= 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		res += arr[i] * base;
		base *= 2;
		i--;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", reverse_bits(128));
	printf("%d\n", reverse_bits(25));
	return (0);
}
