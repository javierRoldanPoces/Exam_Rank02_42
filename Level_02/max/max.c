#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
	i++;
	}
	return (max);	
}

int main(void)
{
	int tab[5] = {1, 22, 21, 0, 98};
	int *ptr;
	
	ptr = &tab[0];
	printf("%d", max(ptr, 5));
	return (0);
}