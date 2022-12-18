/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:03:11 by tleung            #+#    #+#             */
/*   Updated: 2022/12/13 18:49:30 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s1[x] != '\0' && s2[y] != '\0')
	{
		if (s1[x] > s2[y] || s1[x] < s2[y])
			return (s1[x] - s2[y]);
		x++;
		y++;
	}
	return (0);
}

int	main(void)
{
  char c[] = "abcdopl";
  char d[] = "abcdefg";
  printf ("%d\n", ft_strcmp(c ,d));
  return (0);
}
