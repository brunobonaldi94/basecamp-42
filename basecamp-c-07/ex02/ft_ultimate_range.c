/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:14:52 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/18 17:57:01 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_values;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = -1;
	range_values = (max - min);
	*range = (int *)malloc(sizeof(int) * range_values);
	if (range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	else
	{
		i = -1;
		while (++i < range_values)
			range[0][i] = min + i;
	}
	return (i);
}
