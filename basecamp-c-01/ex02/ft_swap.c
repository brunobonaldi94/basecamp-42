/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 02:12:27 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/05 14:53:34 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b);

void	ft_swap(int *a, int*b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
