/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:21:45 by cagil             #+#    #+#             */
/*   Updated: 2025/02/27 13:07:04 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//take the int and reverse it
void	ft_reverse(char *num, int size)
{
	char	temp_c;
	int		aux_size;

	aux_size = -1;
	while (aux_size <= size)
	{
		temp_c = num[size];
		num[size] = num[aux_size];
		num[aux_size] = temp_c;
		size--;
		aux_size++;
	}
}

//Convert the value of int nb in to an array of char but the result
//is a reverse int
void	ft_putnbr(int nb)
{
	char	num[10];
	int		size;

	size = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	else if (nb == 0)
		num[size++] = '0';
	while (nb > 0)
	{
		num[size++] = (nb % 10) + '0';
		nb /= 10;
	}
	ft_reverse(num, size);
	write (1, &num, size);
}
