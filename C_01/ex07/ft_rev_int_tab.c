/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:44:06 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 15:01:22 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_i;
	int	aux_size;

	aux_size = -1;
	while (aux_size <= size)
	{
		temp_i = tab[size];
		tab[size] = tab[aux_size];
		tab[aux_size] = temp_i;
		size--;
		aux_size++;
	}
}
/*
int	main(void)
{
	int num[3];

	num[0] = 0 + '0';
	num[1] = 1 + '0';
	num[2] = 2 + '0';
	write(1, &num, 9);
	ft_rev_int_tab(num, 3);
	write(1, "-", 1);
	write(1, &num, 9);
}*/
