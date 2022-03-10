/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:20:29 by chson             #+#    #+#             */
/*   Updated: 2022/02/16 17:09:00 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	is_char(char c)
{
	if (is_uppercase(c))
		return (1);
	if (is_lowercase(c))
		return (1);
	if (is_number(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	if (is_lowercase(str[0]))
		str[0] = str[0] - 32;
	i = 0;
	while (str[i])
	{
		if (!is_char(str[i]) && is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
