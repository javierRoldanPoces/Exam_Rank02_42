#include <unistd.h>

int check(char c, char *str, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while (argv[1][i] != '\0')
			i++;
		while (argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		j = 0;
		while (argv[1][j] != '\0')
		{
			if(check(argv[1][j], argv[1], j) == 1)
				write(1, &argv[1][j], 1);
			j++;
		}
	}

	write(1, "\n", 1);
}
