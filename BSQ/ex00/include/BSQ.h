/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:06:31 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/31 10:06:35 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_cat(void);
void	ft_putnbr(int nb);
void	ft_print_names(int i, int argc, char **argv);
char	ft_get_char_void(char *argv);
char	ft_get_char_obst(char *argv);
char	ft_get_char_full(char *argv);
char	**ft_fill_map(char **map, char *file, char o, char p);
void	ft_print_solutions(int i, char *argv, int k, int l);
char	*ft_strcpy(char *dest, char *src);
char	**ft_read_file(char *argv);
void	ft_get_second_line(int fd);
void	ft_display_file(int i, int fd, int argc, char **argv);
char	**ft_buf_malloc(int l, char **buf, int c);
char	**add_end_in_buf(int l, char *argv, char **buf, int c);
int		ft_strlen(char *str);
int		ft_verif_chars(char *argv, int i, char v, char o);
int		ft_verif_columns(char *argv);
int		ft_verif_returns(char *argv);
int		ft_verif_map(char *argv);
int		ft_get_next_columns(char *argv, int fd);
int		ft_atoi(char *str);
int		ft_size_file(char *argv);
int		ft_min(int a, int b, int c);
int		**ft_generate_map(int l, int c);
int		ft_biggest_square(char **map, int c, int l, char o);
int		ft_find_position_square(char **map, int c, int l, char o);
int		ft_get_number_lines(char *argv);
int		ft_get_number_columns(char *argv);

#endif
