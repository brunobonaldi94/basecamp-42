/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:07:18 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/08 19:54:53 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b);
void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int*b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[(size - 1) - i]);
		i++;
	}
}
