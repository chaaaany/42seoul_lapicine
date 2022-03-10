/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:17:29 by chson             #+#    #+#             */
/*   Updated: 2022/02/17 16:08:57 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

void	ft_print_hexa(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
		{
			ft_putchar('\\');
			ft_print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
