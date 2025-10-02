/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:58:43 by cagil             #+#    #+#             */
/*   Updated: 2025/03/12 13:39:04 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (src_size + size);
	src_size = 0;
	while (src[src_size] != '\0' && (dest_size + src_size) < size)
	{
		dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	dest[dest_size + src_size] = '\0';
	return (src_size + dest_size);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	str[]="World";
	char	dest[10] = "Hello";
	size_t	size = 8;

	printf("Mi Funcion -> %i\n", ft_strlcat(dest, str, 8));
	printf("Funcion original -> %zu\n", strlcat(dest, str, size));
	printf("Dest[%s]", dest);
}*/
