/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:20:43 by chson             #+#    #+#             */
/*   Updated: 2022/02/23 15:43:37 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int				i;
	t_stock_str		*dest;

	dest = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < argc)
	{
		dest[i].str = argv[i];
		dest[i].copy = ft_strdup(argv[i]);
		dest[i].size = ft_strlen(argv[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}
