/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:48:20 by chson             #+#    #+#             */
/*   Updated: 2022/02/21 20:01:10 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_base(int n, char *base, int base_len)
{
	if (n == -2147483648)
	{
		ft_print_base(n / base_len, base, base_len);
		ft_putchar(base[-(n % base_len)]);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_print_base(n * -1, base, base_len);
		return ;
	}
	if (n > base_len - 1)
		ft_print_base(n / base_len, base, base_len);
	ft_putchar(base[n % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen(base);
	ft_print_base(nbr, base, base_len);
}
