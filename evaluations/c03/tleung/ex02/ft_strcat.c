/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:44:10 by tleung            #+#    #+#             */
/*   Updated: 2022/12/12 17:03:06 by tleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<string.h>*/
char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
/*
int main(void)
{
  char *t;
  
  char a[30] = "This is destination";
  char b[30] = "This is source";
  
  t = ft_strcat(a, b);
  printf("The final destination : %s\n", a);
  return (0);
}*/
