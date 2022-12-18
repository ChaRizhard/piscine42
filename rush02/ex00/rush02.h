/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:44:59 by hli               #+#    #+#             */
/*   Updated: 2022/12/10 16:34:39 by hli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# define BUF_SIZE 4096

int		str_length(char *str);
void	put_str(char *str);
void	put_char(char c);
int		str_to_int(char *str);
int		str_is_numb(char *str);
int		char_is_numb(char c);
int		input_checker(int i, char **args);
int		range_checker(char *str);
char	*ft_strstr(char *str, char *to_find);
int		find_pos_by(char *str, char end);
char	*get_line(char *str);
void	print_word(char *str);
void	open_file(char *file_path, char *keywords);
int		digit_len(int nb);
char	*int_to_str(int nb);
int		power(int base, int pow);
int		search_in_buf(char *buf, int key);
void	mapping(char *buf, int key, int len);
#endif
