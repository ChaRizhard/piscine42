/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:20:06 by tleung            #+#    #+#             */
/*   Updated: 2022/12/13 18:53:09 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (k < n && s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] > s2[k] || s1[k] < s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	return (0);
}

int	main(void)
{
  char c[] = "abclhg";
  char d[] = "";
  printf ("%d\n", ft_strncmp(c ,d, 4));
  return (0);
}
