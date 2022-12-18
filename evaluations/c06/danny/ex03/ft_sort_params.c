/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:59:14 by dphan             #+#    #+#             */
/*   Updated: 2022/12/11 13:03:12 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *word)
{
	int	i;

	i = 0;
	while (word[i] != '\0')
	{
		write(1, &word[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	comparediff(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort(int argc_length, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc_length)
	{
		j = 1;
		while (j < argc_length)
		{
			if (comparediff(str[i], str[j]) < 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		print(argv[i]);
		i++;
	}
	return (0);
}
