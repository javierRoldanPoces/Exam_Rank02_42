#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
 // funciona con int pero lo mismo no se lo traga y hay q usar long y size_t en la copia x de nbr 
int ft_size(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while(n > 0)
	{
		n = n / 10;
		i++;
	};
	return i;
}

char	*ft_itoa(int nbr)
{
	int size;
	int x;
	char *str;

	x = nbr;
	size = ft_size(nbr);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	size = size -1;
	if (nbr == 0)
	{	
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		x = x * -1;
	}
	while(x > 0)
	{	
		str[size] = (x % 10) + '0';
		x = x / 10;
		size--;
		
	}
	return (str);
}

int main (void)
{
	int n;
	int tam;
	char *str;

	n = -1065702;
	tam = ft_size(n);
	printf("%d \n", tam);
	str = ft_itoa(n);
	printf("%s",str);
	return (0);
}