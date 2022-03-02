/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:27:39 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/08 02:29:52 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pow_of_ten(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (10 * pow_of_ten(n - 1));
	}
}

void	ft_print_result(int numb, int bas, int pow)
{
	int	tens;

	tens = 0;
	while (bas >= 0)
	{
		tens = numb / pow;
		ft_putchar(tens + '0');
		numb = numb - tens * pow;
		pow /= 10;
		bas--;
	}
}

void	ft_putnbr(int nb)
{
	int	base;
	int	b;
	int	power;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	b = nb;
	base = 0;
	while (b > 9)
	{
		base++;
		b /= 10;
	}
	power = pow_of_ten(base);
	ft_print_result(nb, base, power);
}
