/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:03:17 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:04:37 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
#define	DEBUG_H

void	print_row(int **game_header, int index,t_table_size s_tsize, char *c);
void	print_table(int **game_header, t_table_size s_tsize);

#endif
