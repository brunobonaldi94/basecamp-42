/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsed_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:58:30 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 03:01:34 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSED_INPUT_H
#define PARSED_INPUT_H

int		get_table_size(char *argv, int sides);
int		*ft_parsed_input(char *user_inputs, t_table_size s_tsize);
void	ft_free_game(int **game, t_table_size s_tsize);

#endif