/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:03:49 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 17:12:55 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	sort;
	int	i;

	sort = 1;
	while (sort == 1)
	{
		sort = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				temp = tab[i];
				tab [i] = tab[i + 1];
				tab[i + 1] = temp;
				sort = 1;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
	int num[5];

	num[0] = 53;
	num[1] = 51;
	num[2] = 56;
	num[3] = 49;
	num[4] = 50;
	write(1, &num, 18);
	ft_sort_int_tab(num, 5);
	write (1, "-", 1);
	write (1, &num, 18);
	return (0);
}*/
