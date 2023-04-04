#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	int i;

	i = ft_strlen(argv[1]) - 1;
	if(argc == 2)
	{
		while (i >= 0)
		{
		write(1, &argv[1][i], 1);
		i--;
		}
	}

	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "print", 5);
	return (0);
}
