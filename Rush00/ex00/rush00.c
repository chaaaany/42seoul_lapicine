/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chseo <chseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:31:52 by chseo             #+#    #+#             */
/*   Updated: 2022/02/05 16:57:14 by jihlim           ###   ########.fr       */
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
			if ((s == 1 || s == y) && (e == 1 || e == x))
				ft_putchar('o');
			else if (e == 1 || e == x)
				ft_putchar('|');
			else if (s == 1 || s == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		e = 0;
		ft_putchar('\n');
	}
}
