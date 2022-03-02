/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:01:16 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/17 19:33:21 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
