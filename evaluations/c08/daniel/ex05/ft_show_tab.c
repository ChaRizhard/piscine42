/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:58:18 by hli               #+#    #+#             */
/*   Updated: 2022/12/13 11:58:20 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	while (*str)
	{
		put_char(*str);
		str++;
	}
}

void	put_nbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		put_char('-');
	}
	if (nbr < 10)
		put_char(nbr + '0');
	if (nbr > 9)
	{
		put_nbr(nbr / 10);
		put_nbr(nbr % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		put_str(par->str);
		put_char('\n');
		put_nbr(par->size);
		put_char('\n');
		put_str(par->copy);
		put_char('\n');
		par++;
	}
}
/*
int str_len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *str_cp(char *src)
{
    int     i;
    char    *ptr;

    i = str_len(src);
    ptr = malloc((i + 1) * sizeof(src));
    if (!ptr)
        return (NULL);
    i = 0;
    while (src[i])
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int             i;
    t_stock_str     *ptr;

    ptr = malloc((ac + 1) * sizeof(t_stock_str));
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        ptr[i].str = av[i];
        ptr[i].size = str_len(av[i]);
        ptr[i].copy = str_cp(av[i]);
        i++;
    }
    ptr[i].str = 0;
    return (ptr);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	tab = ft_strs_to_tab(argc,argv);
	ft_show_tab(tab);
	return (0);
}
*/
