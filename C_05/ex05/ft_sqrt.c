/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:34:01 by cagil             #+#    #+#             */
/*   Updated: 2025/03/13 12:51:38 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	try;

	try = 1;
	if (nb <= 0)
		return (0);
	while ((try * try <= nb))
	{
		if (try * try == nb)
			return (try);
		try ++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_sqrt(-1));
	return (0);
}*/
