char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return (0);
}
