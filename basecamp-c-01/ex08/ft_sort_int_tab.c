/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:31:12 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/08 20:05:52 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b);
void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int*b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		while (i < size)
		{	
			if (tab[i] > tab[i + 1] && i + 1 < size)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
			else
			{
				break ;
			}
		}
		i++;
	}
}
