/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:27:48 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/13 16:36:40 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		write (1, &str[i], 1);
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "yolo";
	char *pnt;
	pnt = str;

	ft_putstr(pnt);
	return (0);
}

