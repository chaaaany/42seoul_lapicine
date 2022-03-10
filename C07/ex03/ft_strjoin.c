/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:25:27 by chson             #+#    #+#             */
/*   Updated: 2022/02/24 16:09:04 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(char **strings, int size, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_str_length(strings[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*error_case(void)
{
	char	*null_string;

	null_string = (char *)malloc(sizeof(char));
	null_string[0] = 0;
	return (null_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*tmp;
	char	*dest;

	if (size == 0)
		return (error_case());
	total_len = ft_total_len(strs, size, ft_str_length(sep));
	dest = (char *)malloc((total_len + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	tmp = dest;
	i = -1;
	while (++i < size)
	{
		ft_strcpy(tmp, strs[i]);
		tmp += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(tmp, sep);
			tmp += ft_str_length(sep);
		}
	}
	*tmp = '\0';
	return (dest);
}
