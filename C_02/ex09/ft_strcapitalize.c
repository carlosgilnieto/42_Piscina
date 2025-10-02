/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:37:59 by cagil             #+#    #+#             */
/*   Updated: 2025/03/05 20:27:23 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
			if (new == 1)
				str[i] = str[i] - 32;
		if (str[i] >= 'A' && str [i] <= 'Z')
			if (new == 0)
				str[i] = str[i] + 32;
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			new = 1;
		else
			new = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	phrase[] = "salut, comment tu vas ? 42mots quarante-deux;";

	printf("Frase: %s",phrase);
	printf("\nreturn: %s", ft_strcapitalize(phrase));
	return (0);
}*/
