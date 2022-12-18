/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:13:11 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/13 15:35:01 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char bub[] = "yoyo";
	char *str;

	str = bub;

	printf("the string length is: %d", ft_strlen(str));
	return (0);
}
*/
