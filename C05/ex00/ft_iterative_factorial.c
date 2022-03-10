/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:18:26 by chson             #+#    #+#             */
/*   Updated: 2022/02/22 09:25:08 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ans = 1;
	while (nb)
		ans *= (nb--);
	return (ans);
}
