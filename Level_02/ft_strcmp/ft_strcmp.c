#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
	char s1[10] = "Holap";
	char s2[10] = "Holab";
	char *s01;
	char *s02;

	s01 = &s1[0];
	s02 = &s2[0];

	printf("\n %d",ft_strcmp(s01, s02));
}