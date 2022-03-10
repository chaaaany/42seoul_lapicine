/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinypark <jinypark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:27:26 by jinypark          #+#    #+#             */
/*   Updated: 2022/02/13 18:03:30 by jinypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_data[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
int		g_count;
int		g_flag;

int		count_bldg(int *line);
int		check_dup(int *arr);
int		ft_cmp(int *a, int *b);
int		*make_ans(int *tmp, int *brr);
void	print_ans(int *input);

void	make_tmp(int *tmp, int *arr, int *input)
{
	int		cnt;
	int		x;
	int		y;

	y = 0;
	cnt = 3;
	while (cnt > -1)
	{
		x = 0;
		while (x < 4)
		{
			arr[x + y] = g_data[3 - cnt][x];
			x++;
		}
		y += 4;
		cnt--;
	}
	make_ans(tmp, arr);
	if (check_dup(arr) == 1 && ft_cmp(tmp, input) == 1)
	{
		print_ans(arr);
		g_flag = 1;
	}
}

void	swap(int i, int j, int cnt)
{
	int		temp;

	if (i == j)
		return ;
	temp = g_data[cnt][i];
	g_data[cnt][i] = g_data[cnt][j];
	g_data[cnt][j] = temp;
}

void	permutation(int TotalN, int N, int cnt, int *input)
{
	int		arr[16];
	int		tmp[16];
	int		j;

	if (g_flag == 1)
		return ;
	if (N == 1)
	{
		if (cnt == 3)
		{
			g_count++;
			make_tmp(tmp, arr, input);
		}
		else
			permutation(4, 4, cnt + 1, input);
		return ;
	}
	j = 0;
	while (j < N)
	{
		swap(j, N - 1, cnt);
		permutation(TotalN, N - 1, cnt, input);
		swap(j, N - 1, cnt);
		j++;
	}
}

int	check_err(int ac, char **argv)
{
	int		i;

	if (ac != 17)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	while (i < 17)
	{
		if (argv[i][1] != '\0')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		else if (49 > argv[i][0] || argv[i][0] > 52)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **argv)
{
	int		i;
	int		check;
	int		input[16];

	check = 0;
	i = 0;
	check = check_err(ac, argv);
	if (check == 1)
	{
		while (i < 16)
		{
			input[i] = (int)argv[i + 1][0] - 48;
			i++;
		}
		permutation(4, 4, 0, input);
	}
	if (g_count == 331776)
		write(1, "Error\n", 6);
	return (0);
}
