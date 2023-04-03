#include <unistd.h>

void ft_putchar(int a, char c)
{
	int	i;

	i = 0;
	while(i < a)
	{
		write(1, &c, 1);
		i++;
	}

}

void repeat_alpha(char *str)
{

	if(*str >= 'a' && *str <='z')
		ft_putchar(*str  - 'a', *str);
	if(*str >= 'A' && *str <= 'Z')
		ft_putchar(*str - 'A', *str);
	else
		ft_putchar(1, *str);


}

int main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		while(argv[1][j] != '\0')
		{
			repeat_alpha(&argv[1][j]);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
