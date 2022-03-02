/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:14:55 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/18 17:55:58 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	range_values;

	i = 0;
	if (min >= max)
		return (NULL);
	range_values = (max - min);
	range = (int *)malloc(sizeof(*range) * range_values);
	if (range == NULL)
		return (NULL);
	while (i < range_values)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
