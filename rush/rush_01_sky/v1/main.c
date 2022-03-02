/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:44:12 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 16:20:47 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

int	main(int argc, char *argv[])
{
	int	**game_header;
	int	**game_results;
	int	*parsed_user_inputs;
	t_table_size s_tsize;
	
	s_tsize.sides = 4;
	if (argc != 2 || !is_valid_argument(argv[1], &s_tsize))
	{
	 	print_error();
	 	return (0);
	}
	parsed_user_inputs = ft_parsed_input(argv[1], s_tsize);
	game_header = ft_init_game(parsed_user_inputs, s_tsize);
	if (!is_valid_game(game_header,s_tsize))
	{
		printf("invalid game\n");
		return (0);
	}
	print_table(game_header,s_tsize);
	game_results = 	init_game_results(s_tsize);
	
	max_size_rule(game_header, game_results, s_tsize);
	min_size_rule(game_header, game_results, s_tsize);
	one_two_rule(game_header, game_results, s_tsize);
	two_three_rule(game_header, game_results, s_tsize);
	//CONTAR 3 ELEMENTS
	//SOMA 10
	//CHUTAR NUMERO 
	print_row(game_results,0, s_tsize, " | 0");
	print_row(game_results,1, s_tsize, " | 1");
	print_row(game_results,2, s_tsize, " | 2");
	print_row(game_results,3, s_tsize, " | 3");

	ft_free_game(game_header, s_tsize);
	ft_free_game(game_results, s_tsize);
	
	return (0);
}