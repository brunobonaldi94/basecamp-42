/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:12:00 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/18 21:06:15 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	is_valid_base(char *base, int base_len)
{
	int	i;
	int	j;

	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-')
			|| !(base[i] >= 32 && base[i] <= 126))
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			is_valid;
	int			base_len;
	long int	nb;

	nb = nbr;
	base_len = ft_strlen(base);
	is_valid = is_valid_base(base, base_len);
	if (is_valid)
	{	
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
		else
			ft_putchar(base[nb]);
	}
}
