/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:24:36 by rdomingo          #+#    #+#             */
/*   Updated: 2022/12/09 18:39:47 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char dst[12] = "abcd";
    char sr[] = "efghij";
    char    *desti;

    desti = ft_strncat(dst, sr, 4);
    printf("%s", dst);
    return (0);
}
