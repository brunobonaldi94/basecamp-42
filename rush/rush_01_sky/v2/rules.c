/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:34:30 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:53:05 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"main.h"

void	fill_propagation(int **game_results, t_table_elements table_header,
							int var_results, int max_size)
{
	if (table_header.row == 0)
		game_results[var_results][table_header.col] = var_results + 1;
	else if (table_header.row == 1)
		game_results[var_results][table_header.col] = max_size - var_results;
	else if (table_header.row == 2)
		game_results[table_header.col][var_results] = var_results + 1;
	else
		game_results[table_header.col][var_results] = max_size - var_results;
}

void	max_size_rule(int **game_header, int **game_results,
						t_table_size s_tsize)
{
	t_table_elements	table_header;
	int					var_results;

	var_results = 0;
	table_header.row = 0;
	while (table_header.row < s_tsize.sides)
	{
		table_header.col = 0;
		while (table_header.col < s_tsize.size)
		{
			var_results = 0;
			if (game_header[table_header.row][table_header.col] == s_tsize.size)
			{
				while (var_results < s_tsize.size)
				{
					fill_propagation(game_results, table_header,
						var_results, s_tsize.size);
					var_results++;
				}
			}
			table_header.col++;
		}
		table_header.row++;
	}
}

void	min_size_rule(int **game_header, int **game_results,
						t_table_size s_tsize)
{
	t_table_elements	table_header;

	table_header.row = -1;
	while (++table_header.row < s_tsize.sides)
	{
		table_header.col = -1;
		while (++table_header.col < s_tsize.size)
		{
			if (game_header[table_header.row][table_header.col] == 1)
			{
				if (table_header.row == 0)
					game_results[0][table_header.col] = s_tsize.size;
				else if (table_header.row == 1)
					game_results[s_tsize.size - 1][table_header.col]
						= s_tsize.size;
				else if (table_header.row == 2)
					game_results[table_header.col][0]
						= s_tsize.size;
				else
					game_results[table_header.col][s_tsize.size - 1]
						= s_tsize.size;
			}
		}
	}
}

void	one_two_rule(int **game_header, int **game_results,
	t_table_size s_tsize)
{
	t_table_elements	table_header;

	table_header.row = 0;
	while (table_header.row < s_tsize.sides)
	{
		table_header.col = 0;
		while (table_header.col < s_tsize.size)
		{
			if (game_header[0][table_header.col] == 1
				&& game_header[1][table_header.col] == 2)
				game_results[s_tsize.size - 1][table_header.col] = 3;
			else if (game_header[1][table_header.col] == 1
				&& game_header[0][table_header.col] == 2)
				game_results[0][table_header.col] = 3;
			else if (game_header[2][table_header.col] == 1
					&& game_header[3][table_header.col] == 2)
				game_results[table_header.col][s_tsize.size - 1] = 3;
			else if (game_header[3][table_header.col] == 1
					&& game_header[2][table_header.col] == 2)
				game_results[table_header.col][0] = 3;
			table_header.col++;
		}
		table_header.row++;
	}
}

void	two_three_rule(int **game_header, int **game_results,
	t_table_size s_tsize)
{
	t_table_elements	table_header;

	table_header.row = 0;
	while (table_header.row < s_tsize.sides)
	{
		table_header.col = 0;
		while (table_header.col < s_tsize.size)
		{
			if (game_header[0][table_header.col] == 2
				&& game_header[1][table_header.col] == 3)
				game_results[1][table_header.col] = s_tsize.size;
			else if (game_header[1][table_header.col] == 2
				&& game_header[0][table_header.col] == 3)
				game_results[2][table_header.col] = s_tsize.size;
			else if (game_header[2][table_header.col] == 2
					&& game_header[3][table_header.col] == 3)
				game_results[table_header.col][1] = s_tsize.size;
			else if (game_header[3][table_header.col] == 2
					&& game_header[2][table_header.col] == 3)
				game_results[table_header.col][2] = s_tsize.size;
			table_header.col++;
		}
		table_header.row++;
	}
}
