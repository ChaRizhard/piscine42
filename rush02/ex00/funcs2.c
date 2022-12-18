/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:43:11 by hli               #+#    #+#             */
/*   Updated: 2022/12/11 19:43:13 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	input_checker(int i, char **args)
{
	if (i < 2 || i > 3)
	{
		put_str("Error\n");
		return (0);
	}
	if (i == 2 && !str_is_numb(args[1]))
	{
		put_str("Error\n");
		return (0);
	}
	if (i == 3 && !str_is_numb(args[2]))
	{
		put_str("Error\n");
		return (0);
	}
	return (1);
}

char	*str_cutter(char *str)
{
	int		i;
	char	*ptr;

	i = 1;
	ptr = malloc(str_length(str));
	while (str[i])
	{
		ptr[i - 1] = str[i];
		i++;
	}
	ptr[i - 1] = '\0';
	return (ptr);
}

int	range_checker(char *str)
{
	int		len;
	int		max;
	char	*ptr;

	max = 147483647;
	len = str_length(str);
	if (len > 10)
		return (0);
	if (len == 10 && str[0] > '2')
		return (0);
	if (len == 10 && str[0] == '2')
	{
		ptr = str_cutter(str);
		if (str_to_int(ptr) > max)
		{
			free(ptr);
			return (0);
		}
		free(ptr);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	find_pos_by(char *str, char end)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != end)
		i++;
	return (i + 1);
}
