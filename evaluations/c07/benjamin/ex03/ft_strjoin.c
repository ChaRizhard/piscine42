/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/15 13:55:38 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_tot_len(int size, char **strs, char *sep)
{
	int	s;
	int	i;
	int	lenstr;
	int	lensep;

	if (size == 0)
		return (0);
	s = 0;
	lenstr = 0;
	while (s < size)
	{
		i = 0;
		while (strs[s][i])
		{
			lenstr++;
			i++;
		}
		s++;
	}
	lensep = 0;
	while (sep[lensep])
	{
		lensep++;
	}
	return (lenstr + (size - 1) * lensep);
}

int	write_sep(int lenstr, char *sep, char *str)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		str[lenstr] = sep[i];
		lenstr++;
		i++;
	}
	return (lenstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		s;
	int		i;
	int		lenstr;

	str = (char *)malloc(find_tot_len(size, strs, sep) * sizeof(char));
	s = 0;
	lenstr = 0;
	while (s < size)
	{
		i = 0;
		while (strs[s][i])
		{
			str[lenstr] = strs[s][i];
			lenstr++;
			if (s < size - 1 && !strs[s][i + 1])
			{
				lenstr = write_sep(lenstr, sep, str);
			}
			i++;
		}
		s++;
	}
	return (str);
}


#include<unistd.h>
int    main(void)
{
    char    *strs[] = {"I", "don't", "give", "up."};
    char    sep[] = "---";

    write(1, ft_strjoin(4, strs, sep), 100);
    free(ft_strjoin(0, strs, sep));

	char    *strs2[] = {};
    char    sep2[] = {};

    write(1, ft_strjoin(0, strs2, sep2), 100);
    free(ft_strjoin(0, strs2, sep2));

    return (0);
}

