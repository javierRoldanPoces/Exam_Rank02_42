#include <unistd.h>

int	 main(int argc, char **argv)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag == 1)
					write(1, " ", 1);
				write(1, &argv[1][i], 1);
				flag = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}








/*
int	main(int argc, char **argv)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	if (argc == 2)
	{	
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if(!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag == 1)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

*/



/*
