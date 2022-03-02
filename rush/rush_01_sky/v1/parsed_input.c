/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsed_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:01:45 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/15 20:05:37 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

int	get_table_size(char *argv, int sides)
{
	int	i;
	int numbers_count;

	i = 0;
	numbers_count = 0;
	while (argv[i])
	{
		if (argv[i] >= '1' && argv[i] <= '9')
			numbers_count++;
		i++;
	}
	if (numbers_count % sides != 0)
		return (0);
	else
		return (numbers_count / sides);
}

int	*ft_parsed_input(char *user_inputs, t_table_size s_tsize)
{
	int i;
	int j;
	int *int_parsed_input;
	
	i = 0;
	j = 0;
	int_parsed_input = malloc(4 * 4 * sizeof(int));
	while (user_inputs[i])
	{
		if(valid_number(user_inputs[i],s_tsize.size))
		{								
			int_parsed_input[j++] = user_inputs[i] - 48;
		}
		i++;
	}
	return (int_parsed_input);
}
