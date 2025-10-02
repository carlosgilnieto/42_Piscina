/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:09:54 by cagil             #+#    #+#             */
/*   Updated: 2025/03/13 12:51:04 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	result = 0;
	result = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
	return (result);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%i", ft_fibonacci(-4));
	return (0);
}*/
