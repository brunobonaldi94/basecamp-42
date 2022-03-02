/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:33:19 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 00:59:30 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHARED_H
#define	SHARED_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_table_size
{
	int sides;
	int size;
} t_table_size;

typedef	struct	s_table_elements
{
	int	row;
	int	col;
} t_table_elements;

int		*ft_parsed_input(char *user_inputs, t_table_size s_tsize);
int		get_table_size(char *argv, int sides);

void	print_table(int **game_header,  t_table_size s_tsize);
void	print_row(int **game_header, int index,t_table_size s_tsize, char *c);

int		**ft_init_game(int *parsed_user_inputs,t_table_size s_tsize);
void	ft_populate_game(int **game,int *parsed_user_inputs, t_table_size s_tsize);
void	ft_free_game(int **game, t_table_size s_tsize);
int		**init_game_results(t_table_size s_tsize);

int		valid_number(char c,  int size);
int		count_of_spaces(char *s, t_table_size s_tsize);
int		is_valid_argument(char *s, t_table_size *s_tsize);
int 	is_valid_game(int **game_header, t_table_size s_tsize);
void	print_error(void);

void	max_size_rule(int **game_header,int **game_results, t_table_size s_tsize);
void	min_size_rule(int **game_header,int **game_results, t_table_size s_tsize);
void	one_two_rule(int **game_header,int **game_results, t_table_size s_tsize);
void	two_three_rule(int **game_header,int **game_results, t_table_size s_tsize);

#endif