/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:11:33 by cagil             #+#    #+#             */
/*   Updated: 2025/03/13 15:36:52 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 0)
		while (i < argc)
			ft_putstr(argv[i++]);
	return (0);
}
