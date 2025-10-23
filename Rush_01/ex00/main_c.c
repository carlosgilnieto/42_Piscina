int		ft_check_input(int argc, char *argv[], int *rules);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_grid(int grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(grid[i][j] + '0');
			if (y < 4 - 1)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int	grid[4][4] = {{0}};
	int	rules[16];

	if (argc != 17 || !ft_check_input(argc, argv, rules))
	{
		ft_putstr("Error\n");
		return(1);
	}

	ft_grid(grid);