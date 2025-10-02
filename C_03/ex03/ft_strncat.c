/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:04:44 by cagil             #+#    #+#             */
/*   Updated: 2025/03/11 14:04:09 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	i = 0;
	if (nb != 0)
	{
		while (src[i] != '\0' && i < nb)
		{
			dest[dest_size + i] = src[i];
			i++;
		}
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[20] = "Hola-";

	printf("%s", ft_strncat(dest, src, 0));
	return (0);
}*/
