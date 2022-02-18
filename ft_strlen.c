int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}
