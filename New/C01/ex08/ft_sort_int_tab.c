/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:14:33 by cagil             #+#    #+#             */
/*   Updated: 2025/10/22 21:38:38 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buf;
	int	buf_pos;

	i = 0;
	while (i < size)
	{
		j = i;
		buf = tab[i];
		while (j < size)
		{
			if (buf > tab[j])
			{
				buf = tab[j];
				buf_pos = j;
			}
			j++;
		}
		tab[buf_pos] = tab[i];
		tab[i] = buf;
		i++;
	}
}
