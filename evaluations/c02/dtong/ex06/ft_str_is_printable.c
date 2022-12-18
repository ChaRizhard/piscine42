/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:41:05 by dtong             #+#    #+#             */
/*   Updated: 2022/12/10 17:54:33 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31)
		{
			return (0);
		}
		else
		{
			i++;
			continue ;
		}
	}
	return (1);
}
/*int main ()
{
    char i[] = "SLR";
    int j = ft_str_is_printable(i);
    printf("%d\n", j);
    return(0);
}*/
