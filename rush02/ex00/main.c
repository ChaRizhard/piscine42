/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:44:04 by hli               #+#    #+#             */
/*   Updated: 2022/12/10 16:36:11 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	if (input_checker(argc, argv) == 0)
		return (0);
	if (argc == 2)
	{
		if (range_checker(argv[1]) == 0)
		{
			put_str("Dict Error\n");
			return (0);
		}
		open_file("numbers.dict", argv[1]);
		put_str("\n");
	}
	if (argc == 3)
	{
		if (range_checker(argv[2]) == 0)
		{
			put_str("Dict Error\n");
			return (0);
		}
		open_file(argv[1], argv[2]);
		put_str("\n");
	}
	return (0);
}
