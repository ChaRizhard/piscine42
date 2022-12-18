/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:04:42 by tleung            #+#    #+#             */
/*   Updated: 2022/12/12 17:09:34 by tleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<string.h>*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < nb)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int main(void)
{
  char *t;
  
  char a[30] = "This is destination";
  char b[30] = "This is source";
  
  t = ft_strncat(a, b, 9);
  printf("The final destination : %s\n", a);
  return (0);
}*/
