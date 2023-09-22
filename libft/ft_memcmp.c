int	ft_memcmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		if (str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if (str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
