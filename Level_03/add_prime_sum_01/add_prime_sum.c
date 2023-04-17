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
		n *=-1;
	}
	
	if (n > 9)
	{
		ft_putnbr((n / 10));
		ft_putchar((n % 10) + 48);
	}
	else if (n < 9)
		ft_putchar(n + 48);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
		//return (0);
		sign*=-1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++; 
	}
	return (res * sign);
	
}
 int main(int argc, char **argv)
 {
	int	i;
	int	sum;
	int count;
	int num;

	sum = 2;
	count = 3;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0)
		{
			write(1, "0", 1);
		}
		else
		{
			while (count <= num)
			{
				i = 2;
				while (!(count % i == 0) && i < count)
					i++;
				if (count == i)
					sum+=count;
				count++;
			}
		}
		ft_putnbr(sum);	
	}
	write(1, "\n", 1);
 }


/*int main(void)
{
	char a[] = "-12345";
	char *str;

	str = a;
	ft_putnbr(ft_atoi(str));
	return (0);
}*/