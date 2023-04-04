#include <unistd.h>

int	main (int argc, char **argcv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argcv[1][i])
		{
			if (argcv[1][i] >= 'a' && argcv[1][i] <= 'z')
				argcv[1][i] -= 32;
			else if (argcv[1][i] >= 'A' && argcv[1][i] <= 'Z')
				argcv[1][i] += 32;		
			write(1, &argcv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
