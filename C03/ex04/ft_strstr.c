/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:11:22 by chson             #+#    #+#             */
/*   Updated: 2022/02/17 16:50:47 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp_a;
	char	*tmp_b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tmp_a = str;
		tmp_b = to_find;
		while (*tmp_b && *tmp_a == *tmp_b)
		{
			++tmp_a;
			++tmp_b;
		}
		if (*tmp_b == 0)
			return (str);
		++str;
	}
	return (0);
}
