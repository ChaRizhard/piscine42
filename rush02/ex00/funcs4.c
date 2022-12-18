/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:43:29 by hli               #+#    #+#             */
/*   Updated: 2022/12/11 19:43:31 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	power(int base, int pow)
{	
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	else
		return (base * power(base, pow - 1));
}

int	search_in_buf(char *buf, int key)
{
	char	*ptr;
	char	*new_str;
	int		len;

	len = digit_len(key);
	new_str = int_to_str(key);
	ptr = ft_strstr(buf, new_str);
	if (ptr)
	{
		ptr = get_line(ptr);
		print_word(ptr);
		return (1);
	}
	else
	{
		mapping(buf, key, len);
		return (0);
	}
	free(new_str);
	free(ptr);
}

void	sub_mapping(char *buf, int key, int dv)
{
	search_in_buf(buf, key / dv);
	put_char(' ');
	search_in_buf(buf, dv);
	put_str(" and ");
	search_in_buf(buf, key % dv);
}

void	mapping(char *buf, int key, int len)
{
	if (len <= 2)
	{
		search_in_buf(buf, key / 10 * 10);
		put_char(' ');
		search_in_buf(buf, key % 10);
	}
	if (len > 2 && len < 5)
	{
		search_in_buf(buf, key / power(10, len - 1));
		put_char(' ');
		search_in_buf(buf, power(10, len - 1));
		put_str(" and ");
		search_in_buf(buf, key % power(10, len - 1));
	}
	if (len >= 5 && len <= 6)
		sub_mapping(buf, key, 1000);
	if (len >= 7 && len <= 9)
		sub_mapping(buf, key, 1000000);
	if (len == 10)
		sub_mapping(buf, key, 1000000000);
}

char	*get_line(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(str_length(str) + 1);
	if (!ptr)
	{
		put_str("Error at malloc\n");
		return (NULL);
	}
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
