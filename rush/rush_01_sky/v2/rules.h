/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:59:44 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:59:52 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
#define RULES_H

void	fill_propagation(int **game_results, t_table_elements table_header, int var_results, int max_size);

void	max_size_rule(int **game_header, int **game_results,
						t_table_size s_tsize);
						
void	min_size_rule(int **game_header, int **game_results,
						t_table_size s_tsize);

void	one_two_rule(int **game_header, int **game_results,
	t_table_size s_tsize);

void	two_three_rule(int **game_header, int **game_results,
	t_table_size s_tsize);

#endif