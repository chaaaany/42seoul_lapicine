/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:25:24 by chson             #+#    #+#             */
/*   Updated: 2022/02/21 19:50:38 by chson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	is_base_valid(char *str)
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	tmp = str;
	len = ft_strlen(str);
	i = 0;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*tmp)
	{
		if (is_whitespace(*tmp) || *tmp == '+' || *tmp == '-')
			return (0);
		tmp++;
	}
	while (i < len)
	{
		j = i + 1;
		while (j < len)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int	check_base(char *base, char str)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == str)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	answer;
	int	sign;
	int	base_num;

	if (!is_base_valid(base))
		return (0);
	base_len = ft_strlen(base);
	answer = 0;
	sign = 1;
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (check_base(base, *str) != -1)
	{
		base_num = check_base(base, *str);
		answer = answer * base_len + base_num;
		str++;
	}
	return (answer * sign);
}
