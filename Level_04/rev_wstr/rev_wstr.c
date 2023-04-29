#include <unistd.h>

int ft_strlen(char *c)
{
    int i;
    i = 0;
    while(c[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;

   
    i = 0;
    if (argc == 2)
    {
        i = ft_strlen(argv[1]);
        while(i >= 0)
        {
            while(argv[1][i] == '\0' && argv[1][i] == ' ' && argv[1][i] == '\t')
                i--;
            end = i;
            while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;
            start = i + 1;  
            flag = start;
            while (start <= end)
            {   
                write(1, &argv[1][start], 1);
                start ++;
            }
            i--;
        if(flag != 0)
            write(1, " ", 1);
        }           
    }
    write(1, "\n", 1);
    return (0);
}