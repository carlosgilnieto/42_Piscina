/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:10:40 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 14:18:27 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	write(1, &div, 1);
	write(1, &mod, 1);
	ft_div_mod(53, 10, &div, &mod);
	write(1, "-", 1);
	div = div + '0';
	mod = mod + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
	return (0);
}*/
