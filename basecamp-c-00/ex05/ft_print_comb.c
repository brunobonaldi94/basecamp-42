/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:27:52 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/06 13:24:57 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int i)
{
	ft_putchar(i + '0');
}

void	ft_print_multiple_numbers(int i, int j, int k)
{
	ft_print_number(i);
	ft_print_number(j);
	ft_print_number(k);
	if (i < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	max;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	max = 9;
	while (num1 <= max)
	{
		num2 = num1 + 1;
		while (num2 <= max)
		{
			num3 = num2 + 1;
			while (num3 <= max)
			{	
				ft_print_multiple_numbers(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
