/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:43:30 by hli               #+#    #+#             */
/*   Updated: 2022/12/10 16:34:44 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_str(char *str)
{
	write(1, str, str_length(str));
}

int	str_to_int(char *str)
{
	int	i;
	int	output;

	i = 0;
	output = 0;
	while (str[i])
	{
		output *= 10;
		output += (str[i] - '0');
		i++;
	}
	return (output);
}

int	str_is_numb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_numb(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	char_is_numb(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
