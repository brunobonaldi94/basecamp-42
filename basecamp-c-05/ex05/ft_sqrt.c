/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:01:45 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/18 00:41:58 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	low;
	long int	mid;
	long int	high;

	low = 0;
	high = nb;
	mid = 0;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	if (nb > 1)
	{
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (mid * mid == nb)
				return (mid);
			else if (mid * mid < nb)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (0);
}
