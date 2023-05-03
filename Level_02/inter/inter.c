#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int j;
	char a;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while(argv[1][i])
		{	
			j = 0;
			while((argv[1][i] != argv[2][j]) && argv[2][j])
				j++;
			if (argv[2][j] != '\0')
			{
				a = argv[2][j];
				j = i - 1;
				while (j >= 0 && argv[1][j] != a)
					j--;
				if (j == -1)
					write(1, &a, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
	}








/*#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int j;
	char a;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			j = 0;
			while((argv[1][i] != argv[2][j]) && argv[2][j]) // esta en el segundo array, si no esta llega a \0
				j++;
			if (argv[2][j] != '\0')
			{
				a = argv[2][j];
				j = i - 1;
				while (a != argv[1][j] && j >= 0)
					j--;
				if (j == -1)
					write(1, &a, 1);
			}	
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/
