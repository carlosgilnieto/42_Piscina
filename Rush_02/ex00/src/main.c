/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:25:24 by cagil             #+#    #+#             */
/*   Updated: 2025/03/09 18:23:59 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//use files
int	open_file(char *filename);
char	*read_file(int fd);
void	close_file(int fd);
//errors
int	error(void);
int	dict_error(void);

int	ft_str_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	str_i;

	str_i = 0;
	if(*to_find == '\0')
		return (str);
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
void	get_num(char *nbr)
{
	static int	pos;

	pos = 0;
	if (*nbr != '\0')
	{
		get_num(nbr+1);
		pos++;
	}
}

int	main(int argc, char *argv[])
{
	char	*dict;
	char	*num;

	dict = "numbers.dict";
	if (argc == 1)
		write (1, read_file(3), 20);
	if (argc == 2)
	{
		if (ft_str_is_num(argv[1]) == 0)
			return (error());
		num = argv[1];
	}
	if (argc == 3)
	{
		if (ft_str_is_num(argv[2]) == 0)
			return (error());
		dict = argv[1];
		 num = argv[2];
	}
	if (open_file(dict) != 3)
		return (dict_error());
	get_num(num);
	close_file(3);
	return (0);
}
