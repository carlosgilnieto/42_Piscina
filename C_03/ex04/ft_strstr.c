/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:27:02 by cagil             #+#    #+#             */
/*   Updated: 2025/03/11 12:33:39 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	str_i;

	if (*to_find == '\0')
		return (str);
	str_i = 0;
	while (str[str_i] != '\0')
	{
		i = 0;
		while (str[str_i + i] == to_find[i] && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (&str[str_i]);
		str_i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hellow";
	char	to_find[] = "l";

	printf("to_find: [%s]", ft_strstr(str, to_find));
	return(0);
}*/
