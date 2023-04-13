char    *ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = 0;
	while (str[i])
		len++;
	while (i < i / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return (str);
}