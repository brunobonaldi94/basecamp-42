/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:44:11 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/12 17:17:20 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		should_capitalize(char *strn, int index);
int		is_char_uppercase(char c);
int		is_char_lowercase(char c);
int		is_word(char c);

int	is_word(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	is_char_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_char_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	should_capitalize(char *strn, int index)
{
	if (index == 0 || !is_word(strn[index - 1]))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_char_lowercase(str[i]) && should_capitalize(str, i))
			str[i] -= 32;
		else if (is_char_uppercase(str[i]) && !should_capitalize(str, i))
			str[i] += 32;
		i++;
	}
	return (str);
}
