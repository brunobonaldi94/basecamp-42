/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:19:18 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/15 23:17:49 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	char	*c;
	int		sign;
	int		result;

	c = str;
	sign = 1;
	result = 0;
	while ((*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f'
			||*c == '\r' || *c == ' '))
		++c;
	while ((*c == '-' || *c == '+'))
	{
		if (*c == '-')
			sign *= -1;
		c++;
	}
	while (is_number(*c))
	{
		result = (result * 10) + (*c - '0');
		++c;
	}
	return (sign * result);
}
