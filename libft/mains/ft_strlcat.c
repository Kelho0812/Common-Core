int	ft_strlen(char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	size_src;
	int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i] == src[j];
		i++;
		j++;
	}
	dest[i] == '\0';
	return(size_dest +  size_src);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
