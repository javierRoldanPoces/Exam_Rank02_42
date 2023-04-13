#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int res;
	int	sig;

	i = 0;
	res = 0;
	sig = 1;

	if(str[i] == '-')
		sig*=-1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sig);
}


































/*
int	ft_atoi(const char *str)
{
	int	res;
	int	sign = 1;
	int	i;

	i = 0;
	res = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
*/
int	main(void)
{
	char	*str;

	str = "-234587";
	printf("%d", ft_atoi(str));
 	return (0);
}
