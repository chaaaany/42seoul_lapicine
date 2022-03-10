/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:15:45 by chson             #+#    #+#             */
/*   Updated: 2022/02/24 15:51:29 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*dest;

	if (min >= max)
		return (0);
	range = max - min;
	dest = (int *)malloc(range * sizeof(int));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < range)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
