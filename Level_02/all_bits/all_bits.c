#include <unistd.h>

// funcion para imprimir bits por pantalla
void	print_bits(unsigned char octet)
{
	int	i;

	unsigned char bit;
	i = 8;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

// Funcion reverse_bits
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bits;
	int				i;
	
	bits = 0;
	i = 7;
	while(i >= 0)
	{
		bits = (bits << 1) + (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (bits);	
}

// Funcion swap_bits

unsigned char	swap_bits(unsigned char octet)
{
	return(octet << 4 | octet >> 4);
}




int main(void)
{
	unsigned char octet = 'c';
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse_bits(octet));
	write(1, "\n", 1);
	print_bits(swap_bits(octet));
	write(1, "\n", 1);
}
/*  Pruebas
		SALIDA TERMINAL
		
   128 64 32 16 8 4 2 0
   0   1  1  0  0 0 1 1  / c -> 99 print bits (ok)
   1   1  0  0  0 1 1 0  / reverse (ok)
   0   0  1  1  0 1 1 0  /swap bits (ok)

		OPERACIONES LOGICAS FUNCIONES 

Print_bits -->    bit = ((octet >> i & 1) + '0')
Reverse_bits --> bits = (bits << 1) + (octet & 1);
				octet >> 1;
Swap_bits --> return (octet >> 4 | octet << 4);

*/