 #include <stdlib.h>
 #include <stdio.h>

typedef struct  s_point
{
    int           x;
    int           y;
}           t_point;
 
 
void  flood_fill(char **tab, t_point size, t_point begin)
{
    char c;
    t_point p;

    c = tab[begin.y][begin.x];
    tab[begin.y][begin.x] = 'F';

    if (begin.y > 0 && tab[begin.y -1][begin.x] == c)
    {
        p.x = begin.x;
        p.y = begin.y - 1;
        flood_fill(tab, size, p);
    }
    if((begin.y < size.y -1) && tab[begin.y + 1][begin.x] == c)
    {
        p.x = begin.x;
        p.y = begin.y + 1;
        flood_fill(tab, size, p);
    }
    if(begin.x > 0 && tab[begin.y][begin.x -1] == c) 
    {
        p.y = begin.y;
        p.x = begin.x -1;
        flood_fill(tab, size, p);
    }
    if((begin.x < size.x - 1) && tab[begin.y][begin.x +1] == c)
    {
        p.y = begin.y;
        p.x = begin.x + 1;
        flood_fill(tab, size, p);
    }

}

 char	**make_area(char **zone, t_point size)
 {
 	char	**new;
 	int		i;
 	int		j;

	i = 0;
 	new = malloc (sizeof(char *) * size.y);
 	while (i < size.y)
 	{
 		new[i] = malloc(size.x + 1);
 		j = 0;
 		while (j < size.x)
 		{
 			new[i][j] = zone[i][j];
 			j++;
 		}
 		new[i][size.x] = '\0';
 		i++;
 	}
 	return (new);
 }

 int main(void)
 {
 	t_point size = {8, 5};
 	char *zone[] = {
 		"11111111",
 		"10001001",
 		"10010001",
 		"10110001",
 		"11100001",
 	};

 	char **area = make_area(zone, size);
 	for (int i = 0; i < size.y; ++i)
 		printf("%s\n", area[i]);
 	printf("\n");
 	t_point begin = {7, 4};
 	flood_fill(area, size, begin);
 	for (int i = 0; i < size.y; ++i)
 		printf("%s\n", area[i]);
 	return (0);
}
