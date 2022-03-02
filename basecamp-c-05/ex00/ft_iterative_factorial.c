/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:27:06 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/17 19:29:23 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
