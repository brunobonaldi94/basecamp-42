/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:39:34 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 01:59:32 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_error(void)
{
	write(1, "Error\n", 7);
}

int	valid_number(char c, int size)
{
	if ((c >= '1' && c <= (size + '0')))
		return (1);
	return (0);
}

int	count_of_spaces(char *s, t_table_size s_tsize)
{
	int	i;
	int	str_len;
	int	count;

	i = 0;
	count = 0;
	while (s[str_len])
		str_len++;
	while (s[i])
	{
		if (!(valid_number(s[0], s_tsize.size)
				&& valid_number(s[str_len - 1], s_tsize.size)))
			return (0);
		else if (s[i] == ' ')
			count++;
		i++;
	}
	if (s_tsize.size * s_tsize.sides != count + 1)
		return (0);
	return (1);
}

int	is_valid_argument(char *s, t_table_size *s_tsize)
{
	int	i;
	int	numbers_count;

	i = 0;
	numbers_count = 0;
	s_tsize->size = get_table_size(s, s_tsize->sides);
	while (s[i])
	{
		if (valid_number(s[i], s_tsize->size))
			numbers_count++;
		else if (s[i] != ' ')
			return (0);
		i++;
	}
	return ((numbers_count == s_tsize->size * s_tsize->sides)
		&& count_of_spaces(s, *s_tsize));
}

int	is_valid_game(int **game_header, t_table_size s_tsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		j = 0;
		while (j < s_tsize.size)
		{
			if (game_header[i][j] + game_header[i + 1][j] < s_tsize.size - 1
			|| game_header[i][j] + game_header[i + 1][j] > s_tsize.size + 1)
			{	
				return (0);
			}
			j++;
		}
		i = i + 2;
	}
	return (1);
}
