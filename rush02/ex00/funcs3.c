/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:43:22 by hli               #+#    #+#             */
/*   Updated: 2022/12/11 19:43:24 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_word(char *str)
{
	int		i;

	i = find_pos_by(str, ':');
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			put_char(str[i]);
			i++;
			while (str[i] == ' ')
				i++;
		}
		put_char(str[i]);
		i++;
	}
}

void	open_file(char *file_path, char *keyword)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		put_str("Dict Error\n");
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ret = str_to_int(keyword);
	search_in_buf(buf, ret);
	if (close(fd) == -1)
	{
		put_str("Dict Error\n");
		return ;
	}
}

void	put_char(char c)
{
	write(1, &c, 1);
}

int	digit_len(int nb)
{
	int	i;

	i = 1;
	while (nb)
	{	
		i++;
		nb /= 10;
	}
	return (i - 1);
}

char	*int_to_str(int nb)
{
	int		len;
	int		temp;
	char	*ptr;

	len = digit_len(nb);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
	{
		put_str("Error at malloc\n");
		return (NULL);
	}
	temp = nb;
	ptr[len + 1] = '\0';
	while (len > 0)
	{
		ptr[len - 1] = '0' + (temp % 10);
		temp /= 10;
		len--;
	}
	return (ptr);
}
