/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:47:07 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/17 19:30:27 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	else if (nb < 2 || (nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	i = 5;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long int	i;
	long int	nb1;

	nb1 = nb;
	if (nb1 < 2)
		return (2);
	i = nb1;
	while (i < nb1 * 2)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (i);
}
