int	ft_check_input(int argc, char *argv[], int *rules)
{
	int	i;
	int	value;

	if (argc != 17)
		return (0);

	
	i = 1; // Comenzamos desde 1, porque argv[0] es el nombre del programa
	value = 0;
	while (i < argc)
	{
		if (argv[i][0] >= '1' && argv[i][0] <= '4')
		{
			rules[value] = argv[i][0] + '0'; 
			j++;
		}
		else
			return (0);
		i++;
	}
	return (1);
}