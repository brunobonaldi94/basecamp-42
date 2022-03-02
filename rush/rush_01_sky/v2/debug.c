/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:48:57 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 03:07:19 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"main.h"

void	print_table(int **game_header, t_table_size s_tsize)
{
	print_row(game_header,0, s_tsize, "COL UP");
	print_row(game_header,3, s_tsize, "ROW RIGHT");
	print_row(game_header,1, s_tsize, "COL DOWN");
	print_row(game_header,2, s_tsize, "ROW LEFT");
}

void	print_row(int **game_header, int index,t_table_size s_tsize, char *c)
{
	int i = 0;
	printf("%d |", index);
	while (i < s_tsize.size)
	{
		printf("%d ", game_header[index][i]);
		i++;
	}
	printf("%s \n", c);
}