int	ft_strlen(char *c)
{
	int	i = 0;

	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}
