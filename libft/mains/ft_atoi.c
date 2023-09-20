int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (str[0] == '-' && str[1] >= '0' && str[1] <= '9')
	{
		i = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10;
			num = num + (str[i] - 48);
			i++;
		}
		num = num * (-1);
		return (num);
	}
	else if (str[0] >= '0' && str[0] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10;
			num = num + (str[i] - 48);
			i++;
		}
		return (num);
	}
	return (0);
}
