/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:50:51 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/16 02:46:18 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			|| ((base[i] == '\t' || base[i] == '\n'
					|| base[i] == '\v' || base[i] == '\f'
					|| base[i] == '\r' || base[i] == ' ')))
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

int	convert_single_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	is_valid_input(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*spaces_signs_parser(char *c, int *sign)
{
	while ((*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f'
			||*c == '\r' || *c == ' '))
			++c;
	while ((*c == '-' || *c == '+'))
	{
		if (*c == '-')
			*sign *= -1;
		c++;
	}
	return (c);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		result;
	int		base_len;
	char	*c;

	sign = 1;
	result = 0;
	base_len = 0;
	c = str;
	while (base[base_len] != '\0')
		base_len++;
	if (is_valid_base(base, base_len))
	{
		c = spaces_signs_parser(c, &sign);
		while (is_valid_input(*c, base))
		{
			result = (result * base_len) + convert_single_base(*c, base);
			++c;
		}
	}
	return (sign * result);
}
