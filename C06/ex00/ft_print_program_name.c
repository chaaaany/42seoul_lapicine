/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:16:31 by chson             #+#    #+#             */
/*   Updated: 2022/02/22 18:09:24 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	write(1, str, len);
}

int	main(int argc, char **argv)
{
	if (argc != 0)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
