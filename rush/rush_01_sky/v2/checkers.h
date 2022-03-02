/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:05:20 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:52:03 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHECKERS_H
#define	CHECKERS_H

void	print_error(void);
int		valid_number(char c, int size);
int		count_of_spaces(char *s, t_table_size s_tsize);
int		is_valid_argument(char *s, t_table_size *s_tsize);
int		is_valid_game(int **game_header, t_table_size s_tsize);

#endif