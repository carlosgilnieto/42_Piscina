/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:10:08 by cagil             #+#    #+#             */
/*   Updated: 2025/10/22 21:40:56 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf;
	int	i;

	i = 0;
	size = size -1;
	while (i < size)
	{
		buf = tab[i];
		tab[i] = tab[size];
		tab[size] = buf;
		i++;
		size--;
	}
}
