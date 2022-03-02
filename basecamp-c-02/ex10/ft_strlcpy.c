/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:17:53 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/12 17:15:47 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *s);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_str_len(char *s)
{
	int	j;

	j = 0;
	while (s[j] != '\0')
		j++;
	return (j);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_str_len(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
