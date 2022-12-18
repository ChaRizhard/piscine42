/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riguerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:52:21 by riguerra          #+#    #+#             */
/*   Updated: 2022/12/15 18:18:18 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// returns the length of the given string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int main(void)
{
	char string[] = "42";
	char *str = string;

	printf("\n\n\n\nstr: %s\nstr length: %i\n\n\n\n", str, ft_strlen(str));
}
*/
