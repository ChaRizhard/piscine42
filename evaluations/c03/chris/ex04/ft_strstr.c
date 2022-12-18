/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:23:44 by chmurphy          #+#    #+#             */
/*   Updated: 2022/12/17 17:31:53 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	while (str[i] && to_find[k])
	{
		i++;
		while (str[i] == to_find[k])
		{
			while (to_find[k] != '\0')
			{
				++k;
				++i;
				if (to_find[k] == '\0')
				{
					return (&str[i - k]);
				}
			}
		}
		k = 0;
	}
	return (str);
}
/*
#include <libc.h>
#include <stdio.h>
int	main()
{
	char str[] = "";
	char to_find[] = "qwe";
	char two_find[] = "7890";

	char *res = ft_strstr(str,to_find);
	printf("%s\n", (res));

	res = ft_strstr(str,two_find);
	
	char *res2 = strstr(str,to_find);
	printf("%s\n", (res2));
}*/
