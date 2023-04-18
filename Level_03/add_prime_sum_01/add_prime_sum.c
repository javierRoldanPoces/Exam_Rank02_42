#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr (int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n*=-1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	if (n < 9)
		ft_putchar(n + 48);
}
 //Tener en cuenta que para pàsar int a char sumamos 48 o '0'

 int ft_atoi(const char *str)
 {
	int i;
	int	res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;

	if (str[i] == '-')
		sign*=-1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * sign);
 }

 int main(int argc, char **argv)
 {
	int	i;
	int sum;
	int count;
	int num;

	i = 0;
	sum = 2;
	count = 3;

	if (argc == 2 && !(argv[1][i] == '-'))
	{
		num = ft_atoi(&argv[1][i]);
		while (count <= num)
		{
			i = 2;
			while (!(count % i == 0) && i < count)
				i++;
			if (i == count)
			{
				sum += count;
			}
			count++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
 }

/*
int main(void)
{
	char a[] = "-12345";
	char *str;

	str = a;
	ft_putnbr(ft_atoi(str));
	return (0);
}
*/