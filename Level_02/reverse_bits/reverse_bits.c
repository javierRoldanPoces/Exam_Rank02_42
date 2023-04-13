unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int	i;

	res = 0;
	i = 8;

	while(i > 0)
	{
		res = res << 1 + (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return(res);
}






/*
//128 64 32 16 8 4 2 1 

//0	  1  1  0  0 0 1 1

0 1 1 0 0 0 1 1 	 i		res				octet
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 1  8 -  						0 0 1 1 0 0 0 1
						0 0 0 0 0 0 0 1
0 0 0 0 0 0 1 0 
0 0 0 0 0 0 0 1	 7		0 0 0 0 0 0 1 1		0 0 0 1 1 0 0 0
 
 res = res << 1 + (octet & 1)
 octect = octet >> 1
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res << 1 + (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (res);
}


 */
