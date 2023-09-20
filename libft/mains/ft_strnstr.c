char	*ft_strnstr(char *bigstr, char *findstr, int n)
{
	int	i;
	int	j;

	i = 0;
	if (findstr[0] == '\0')
	{
		return(bigstr);
	}

	while (bigstr[i] != '\0' && i <= n)
	{
		j = 0;
		while (bigstr[i + j] == findstr[j])
		{
			j++;
			if (findstr[j] == '\0')
			{
				return (&bigstr[i]);
			}
		}
		i++;
	}
	return ("\0");
}
