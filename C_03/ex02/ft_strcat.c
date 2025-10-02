/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:07:11 by cagil             #+#    #+#             */
/*   Updated: 2025/03/11 14:04:29 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[15] = "Hola-";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
