/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihlim <jihlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:51:07 by jihlim            #+#    #+#             */
/*   Updated: 2022/02/05 16:58:42 by jihlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{	
	int	s;
	int	e;

	e = 0;
	s = 0;
	while (++s <= y && x > 0)
	{
		while (++e <= x)
		{
			if ((s == 1 && e == 1) || (e == x && s == y && e != 1 && s != 1))
				ft_putchar('A');
			else if ((s == y && e == 1) || (s == 1 && e == x))
				ft_putchar('C');
			else if (s == 1 || e == 1 || e == x || s == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		e = 0;
		ft_putchar('\n');
	}
}
