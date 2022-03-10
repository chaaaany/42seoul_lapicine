/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:48:16 by chson             #+#    #+#             */
/*   Updated: 2022/02/22 12:37:25 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long long int	i;
	long long int	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	i = 1;
	while (i * i < nbr)
		i++;
	if (i * i == nbr)
		return (i);
	return (0);
}
