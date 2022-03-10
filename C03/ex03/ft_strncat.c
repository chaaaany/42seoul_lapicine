/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:46:07 by chson             #+#    #+#             */
/*   Updated: 2022/02/19 13:44:20 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	while (*tmp)
		++tmp;
	while (*src && i < nb)
	{
		*tmp = *src;
		++src;
		++tmp;
		++i;
	}
	*tmp = 0;
	return (dest);
}
