/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:35:16 by cagil             #+#    #+#             */
/*   Updated: 2025/03/04 14:42:50 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}
/*
int	main(void)
{
	int	lenght;

	lenght = ft_strlen("Hello World");
	write (1, &lenght, 1);
	return (0);
}*/
