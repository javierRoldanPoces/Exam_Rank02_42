#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	diff;
	int	sign;
	int	i;

	sign = 1;
	if (start > end)
	{
		diff = start - end;
		sign = -1;
	}
	diff = end - start;
	if (diff < 0)
		diff = -diff;
	diff++;
	range = malloc(sizeof(int *) * diff);
	i = 0;
	while (i < diff)
	{
		if (i == 0)
			range[i] = start;
		else
			range[i] = start + (i * sign);
		i++;
	}
	return (range);
}

int	main(void)
{
	int	*print_range;
	int	i;

	i = 0;
	print_range = ft_range(0, -3);
	while (i <= 4)
	{
		printf("%d", print_range[i]);
		if (i < 5)
			printf(", ");
		i++;
	}
	return (0);
}