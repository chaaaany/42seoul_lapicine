/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_ans.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinypark <jinypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:01:58 by jinypark          #+#    #+#             */
/*   Updated: 2022/02/13 18:02:05 by jinypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_updown(int i, int *line, int *arr)
{
	int		j;
	int		idx;

	idx = 0;
	j = 0;
	if (0 <= i && i <= 3)
	{
		while (idx < 4)
		{
			line[idx] = arr[i + j];
			j += 4;
			idx++;
		}
	}
	else if (4 <= i && i <= 7)
	{
		while (idx < 4)
		{
			line[idx] = arr[i + 8 - j];
			j += 4;
			idx++;
		}
	}
}

void	ft_leftright(int i, int *line, int *arr)
{
	int		j;
	int		idx;

	idx = 0;
	j = 0;
	if (8 <= i && i <= 11)
	{
		while (idx < 4)
		{
			line[idx] = arr[(i - 8)*4 + j];
			j++;
			idx++;
		}
	}
	else if (12 <= i && i <= 15)
	{
		while (idx < 4)
		{
			line[idx] = arr[(i - 12)*4 + 3 - j];
			j++;
			idx++;
		}
	}
}

int	*make_line(int i, int *line, int *arr)
{
	ft_updown(i, line, arr);
	ft_leftright(i, line, arr);
	return (line);
}

int	count_bldg(int *line)
{	
	int		count;
	int		j;
	int		tmp;

	count = 1;
	j = 0;
	tmp = line[0];
	while (j + 1 < 4)
	{
		if (tmp < line[j + 1])
		{
			count++;
			tmp = line[j + 1];
		}
		j++;
	}
	return (count);
}

int	*make_ans(int *tmp, int *arr)
{
	int		line[4];
	int		i;

	i = 0;
	while (i < 16)
	{
		tmp[i] = count_bldg(make_line(i, line, arr));
		i++;
	}
	return (tmp);
}
