/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:17:16 by cagil             #+#    #+#             */
/*   Updated: 2025/03/13 14:44:19 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
	{
		if (nb < 0)
			return (0);
		return (1);
	}
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_recursive_factorial(0));
	return (0);
}*/
