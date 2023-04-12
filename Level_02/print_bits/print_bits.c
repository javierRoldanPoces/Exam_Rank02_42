#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char	bits; 

	i = 7;
	while (i >= 0)
	{
		bits = ((octet >> i) % 2) + '0';
		// bits = (octet >> i & 1) + 0; es lo mismo hacer el & logico de 1 o el modulo de 2
		//write(1,"a", 1);
		write(1, &bits, 1);
		i--;
	}
}

int main(void)
{
	unsigned char octet = 'c';
	print_bits(octet);
	write(1, "\n", 1);
}

// 128 64 32 16 8 4 2 1
//  0  1  1  0 0  0 1 1

