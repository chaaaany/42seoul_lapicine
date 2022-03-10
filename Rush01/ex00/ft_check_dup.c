/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinypark <jinypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:01:23 by jinypark          #+#    #+#             */
/*   Updated: 2022/02/13 18:01:37 by jinypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_dup(int *arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = i;
		while (j < 12)
		{
			k = j + 4;
			while (k < 16)
			{
				if (arr[j] == arr[k])
					return (0);
				k += 4;
			}
			j += 4;
		}
		i++;
	}
	return (1);
}
