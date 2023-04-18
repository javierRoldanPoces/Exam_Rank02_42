#include <stdio.h>
#include <string.h>

//int	ft_atoi_base(const char *str, int str_base);

// funcion que comprueba si el caracter esta en rango
int ft_value(char c)
{
	if (c >= '0' &&c <= '9')
		return(c - 48);
	if (c >= 'a' &&c <= 'z')
		return(c - 48 + 10);
	if (c >= 'A' &&c <= 'Z')
		return(c - 48 +10);
	return (0);	
}

int ft_valid(char c, int base)
{
	char base_upper[] = "0123456789ABCDEF";
	char base_lower[] = "0123456789abcdef";
	int	i;

	i = base;
	while (i >= 0)
	{
		if (c == base_upper[i] || c == base_lower[i])
			return (1);
		i--;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	 int	i;
	 int	sign;
	 int	res;

	i = 0;
	sign = 1;
	res = 0;

	while (str[i] < 0)
		i++;
	if (str[i] == '-')
		sign*=-1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_valid(str[i], str_base) != 0)
	{
		res = res * 10 + ft_value(str[i]);
		i++;
	}
	return (res * sign);
}

 /*
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (*str <= 32)
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		return (0);
	while (ft_valid(str[i], str_base) != 0)
	{
		sum = sum * str_base + ft_value(str[i]);
		i++;
	}
	return (sign * sum);
}
*/
int	main(void)
{
	char	str[] = "-  		 -4567";
	int		str_base =  10;

	printf("%d\n", ft_atoi_base(str, str_base));
	return (0);
}