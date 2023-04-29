#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    int buffer;

    i = 0;
    while (i < size -1)
    {
        if (tab[i] > tab[i + 1])
        {
            buffer = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = buffer;
            i = 0;
        }
        else
            i++;
    }    
}

int main (void)
{
    int a[5] = {9, 8, 7, 6, 5};
    int i = 0;
    int *str;

    str = &a[0];


    for(i =0; i < 5; i++)
        printf("%d",a[i]);
    printf("\n");
    sort_int_tab(str, 5);
    for(i =0; i < 5; i++)
        printf("%d",a[i]);
    return (0);
}