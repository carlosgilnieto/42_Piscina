/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:42:26 by cagil             #+#    #+#             */
/*   Updated: 2025/03/13 14:46:45 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	nb *= ft_recursive_power(nb, power -1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i",ft_recursive_power(2, 5));
	return (0);
}*/
