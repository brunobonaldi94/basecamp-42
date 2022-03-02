/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:50:16 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/06 23:58:16 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

typedef struct s_characters {
	char	fst;
	char	scd;
	char	trd;
}	t_characters;

void	ft_start_end_print(t_characters chars, int col_pos, int columns)
{
	if (col_pos == 0)
	{
		ft_putchar(chars.fst);
	}
	else if (col_pos == columns - 1)
	{
		ft_putchar(chars.trd);
	}
	else
	{
		ft_putchar(chars.scd);
	}
}

void	ft_print_row(t_characters chars, int columns)
{
	int	col_pos;

	col_pos = 0;
	while (col_pos < columns)
	{
		ft_start_end_print(chars, col_pos, columns);
		col_pos++;
	}
	ft_putchar('\n');
}

void	ft_init_struct(t_characters *chars, char fst, char scd, char trd)
{
	chars->fst = fst;
	chars->scd = scd;
	chars->trd = trd;
}

void	rush(int x, int y)
{
	int				k;
	t_characters	first_row;
	t_characters	middle_row;
	t_characters	last_row;

	ft_init_struct(&first_row, 'A', 'B', 'A');
	ft_init_struct(&middle_row, 'B', ' ', 'B');
	ft_init_struct(&last_row, 'C', 'B', 'C');
	if (y > 0)
	{
		ft_print_row(first_row, x);
	}
	k = 0;
	while (k < (y - 2))
	{
		ft_print_row(middle_row, x);
		k++;
	}
	if (y > 1)
	{
		ft_print_row(last_row, x);
	}
}
