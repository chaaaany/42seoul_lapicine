/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ans.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinypark <jinypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:20 by jinypark          #+#    #+#             */
/*   Updated: 2022/02/13 18:02:23 by jinypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_ans(int *ans)
{
	int	i;

	i = 0;
	while (i < 16)
	{	
		ft_putchar('0' + ans[i]);
		if (i % 4 == 1 || i % 4 == 2 || i % 4 == 0)
			ft_putchar(' ');
		if (i % 4 == 3)
			ft_putchar('\n');
		i++;
	}
}
