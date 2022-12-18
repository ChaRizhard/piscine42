/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:55:59 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/13 17:06:39 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		res;

	res = 1;
	if (power > 0)
	{
		i = 0;
		while (i < power)
		{
			res *= nb;
			i++;
		}
	}
	else if (power < 0)
		return (0);
	else
		return (1);
	return (res);
}
