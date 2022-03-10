/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:48:40 by chson             #+#    #+#             */
/*   Updated: 2022/02/24 15:51:57 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		range2;
	int		*dest;
	int		i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range2 = max - min;
	dest = malloc(range2 * sizeof(int));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < range2)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (i);
}
