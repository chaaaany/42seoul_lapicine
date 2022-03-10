/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:08:01 by chson             #+#    #+#             */
/*   Updated: 2022/02/08 15:42:01 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	temp = 0;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab [index] = tab [size - 1 - index];
		tab [size - 1 - index] = temp;
		index++;
	}
}
