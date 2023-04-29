#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int n;

    i = 2;
    n = atoi(argv[1]);
    if (argc == 2)
    {
        if (n == 1)
        {
            printf("1");
        }
        while(i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if(n == i)
                    break;
                printf("*");
                n = n / i;
                i = 2;
            }
            i++;
        }

    }
    printf("\n");
}