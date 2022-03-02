/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:07:43 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/07 01:37:04 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	print_warning(void)
{
	write(1, ("Please provide two integers "\
	"(greater than zero) numbers arguments:\n"\
	"first:	x	(columns)\nsecond:	y	(rows)\n"), 103);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	convert_string_argv(char *each_argv)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (each_argv[i] != '\0')
	{
		if (is_number(each_argv[i]))
		{
			result = result * 10 + each_argv[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = convert_string_argv(argv[1]);
		y = convert_string_argv(argv[2]);
		if (x == 0 || y == 0)
		{
			print_warning();
		}
		else
		{
			rush(x, y);
		}
	}
	else
	{
		print_warning();
	}
	return (0);
}
