#include <unistd.h>

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (argc ==3)
	{
		while(argv[2][j])
		{
			if(argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}




















/*
void ft_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int	 main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while(argv[2][j] != '\0')
		{
			if(argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
*/



/*
int	main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
*/