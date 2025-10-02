/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:03:04 by cagil             #+#    #+#             */
/*   Updated: 2025/02/25 22:15:12 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//You can use char like ints and when you sum with '0' take the int value
//transform this '0' in the int value.
//EJ: 5 + '2' = '7' 
void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	aux;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			aux = (num1 / 10) + '0';
			write (1, &aux, 1);
			aux = (num1 % 10) + '0';
			write (1, &aux, 1);
			write (1, " ", 1);
			aux = (num2 / 10) + '0';
			write (1, &aux, 1);
			aux = (num2 % 10) + '0';
			write (1, &aux, 1);
			if (!(num2 == 99 && num1 == 98))
				write (1, ", ", 2);
			num2++ ;
		}
		num1++ ;
	}
}
