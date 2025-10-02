/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:28:22 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 11:33:33 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Uses recursion to generate all the combinations
void	ft_gen_comb(int n, int value, int pos, char *num)
{
	int	index;

	if (pos == n)
	{
		write(1, num, n);
		if (num[0] != 57 - n + 1)
			write (1, ", ", 2);
		return ;
	}
	index = value;
	while (index <= 9)
	{
		num[pos] = 48 + index;
		ft_gen_comb(n, index + 1, pos + 1, num);
		index++;
	}
}

void	ft_print_combn(int n)
{
	char	num[10];

	if (n > 10 || n < 0)
		return ;
	ft_gen_comb(n, 0, 0, num);
}
