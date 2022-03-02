/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:57:54 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 23:56:16 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && (*s1 == *s2) && *s1 && *s2)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (*to_find == '\0')
		return (str);
	j = ft_strlen(to_find);
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_strncmp(str, to_find, j) == 0)
			return (str);
		str++;
	}
	return ((void *)0);
}
