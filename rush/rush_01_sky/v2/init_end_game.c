/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_end_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:01:47 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 02:52:54 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"main.h"

int	**ft_init_game(int *parsed_user_inputs, t_table_size s_tsize)
{
	int	count_of_rows;
	int	**game;

	count_of_rows = 0;
	game = malloc(sizeof(int *) * s_tsize.sides);
	while (count_of_rows < s_tsize.sides)
	{
		game[count_of_rows] = malloc(sizeof(int) * s_tsize.size);
		count_of_rows++;
	}
	ft_populate_game(game, parsed_user_inputs, s_tsize);
	return (game);
}

void	ft_populate_game(int **game, int *parsed_user_inputs,
	t_table_size s_tsize)
{
	int	rows;
	int	cols;
	int	iteratios;

	rows = 0;
	iteratios = 0;
	cols = 0;
	while (rows < s_tsize.sides)
	{
		cols = 0;
		while (cols < s_tsize.size)
		{
			game[rows][cols] = parsed_user_inputs[iteratios];
			cols++;
			iteratios++;
		}
		rows++;
	}
}

void	ft_free_game(int **game, t_table_size s_tsize)
{
	int	count_of_rows;

	count_of_rows = 0;
	while (count_of_rows < s_tsize.sides)
	{
		free(game[count_of_rows]);
		count_of_rows++;
	}
	free(game);
}

int	**init_game_results(t_table_size s_tsize)
{
	int	**game_results;
	int	i;
	int	j;

	i = 0;
	j = 0;
	game_results = malloc(sizeof(int *) * s_tsize.size);
	while (i < s_tsize.size)
	{
		game_results[i] = malloc(sizeof(int) * s_tsize.size);
		i++;
	}
	while (i < s_tsize.size)
	{
		j = 0;
		while (j < s_tsize.size)
		{
			game_results[i][j] = 0;
			j++;
		}
		i++;
	}
	return (game_results);
}
