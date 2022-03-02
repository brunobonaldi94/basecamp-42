/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:51:44 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/16 14:42:33 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **argv, int i)
{
	char	*swap;

	swap = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	print_swapped_elements(char **argv_parsed, int argc, char new_line)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv_parsed[i][j] != '\0')
		{
			write(1, &argv_parsed[i][j], 1);
			j++;
		}
		write(1, &new_line, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	new_line;
	char	**argv_parsed;

	i = 1;
	new_line = '\n';
	argv_parsed = argv;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv_parsed[i], argv_parsed[i + 1]) > 0)
		{
			ft_swap(argv_parsed, i);
			i = 0;
		}
		i++;
	}
	print_swapped_elements(argv_parsed, argc, new_line);
	return (0);
}
