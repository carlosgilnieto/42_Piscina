/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:21:16 by cagil             #+#    #+#             */
/*   Updated: 2025/02/23 23:19:50 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//This function returns the corresponding letter or space
//depending on the position values in the table.
char	letter_select(int c_pos, int r_pos, int x, int y)
{
	if ((r_pos == 0 || r_pos == y -1) && c_pos == 0)
		return ('A');
	else if ((r_pos == 0 || r_pos == y -1) && c_pos == x -1)
		return ('C');
	else if ((r_pos > 0 && r_pos < y -1) && (c_pos > 0 && c_pos < x -1))
		return (' ');
	else
		return ('B');
}

//This function creates the table with arguments of the size of the table.
//Creates the table if it has a valid size
void	rush(int x, int y)
{
	char	letter;
	int		r_pos;
	int		c_pos;

	r_pos = 0;
	if (x < 1 || y < 1)
		return ;
	while ((r_pos < y))
	{
		c_pos = 0;
		while (c_pos < x)
		{
			letter = letter_select(c_pos, r_pos, x, y);
			ft_putchar(letter);
			c_pos++;
		}
		r_pos++;
		ft_putchar('\n');
	}
}
