/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:34:07 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/16 03:00:42 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;
	char	new_line;

	new_line = '\n';
	program_name = argv[0];
	while (*program_name != '\0' && argc)
	{
		write(1, program_name, 1);
		program_name++;
	}
	write(1, &new_line, 1);
	return (0);
}
