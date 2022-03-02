/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_end_game.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:01:12 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:13:29 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_END_GAME_H
#define	INIT_END_GAME_H

int	**ft_init_game(int *parsed_user_inputs, t_table_size s_tsize);
void	ft_populate_game(int **game, int *parsed_user_inputs,
	t_table_size s_tsize);
void	ft_free_game(int **game, t_table_size s_tsize);
int	**init_game_results(t_table_size s_tsize);

#endif