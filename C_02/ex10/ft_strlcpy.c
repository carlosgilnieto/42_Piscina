/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:28:26 by cagil             #+#    #+#             */
/*   Updated: 2025/03/06 18:10:26 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_size;

	i = 0;
	while (src [i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	src_size = 0;
	while (src [src_size] != '\0')
	{
		src_size++;
	}
	dest[i] = '\0';
	return (src_size);
}
/*
#include <stdio.h>

int	main(void)
{
	char	word[] = "Hola";
	char	copyword[10];

	printf("%i", ft_strlcpy(copyword, word, 10));
	return (0);
}*/
