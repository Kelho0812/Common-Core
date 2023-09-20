int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (str1[i] != '0' && i <= n)
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

	if (str1[i] == '0' && str2[i] != '0')
	{
		return (str1[i] - str2[i]);
	}
	return (0);
}
