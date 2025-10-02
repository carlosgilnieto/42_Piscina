/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:19:41 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 14:26:37 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *a / *b;
	*b = num % *b;
}
/*
void    ft_putint(int n)
{
        n = n + '0';
        write (1, &n, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 53;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	ft_putint(a);
	ft_putint(b);
	return (0);
}*/
