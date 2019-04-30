/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:17:24 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:34:48 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		**create_arr(char player, char enemy, char **map)
{
	int	i;
	int	**res;
	int	j;
	int	count_i;

	count_i = 0;
	while (map[count_i])
		++count_i;
	res = (int **)malloc(sizeof(int *) * (count_i + 1));
	i = -1;
	while (++i < count_i)
	{
		res[i] = (int *)malloc(sizeof(int) * ((int)ft_strlen(map[0]) + 1));
		res[i][(int)ft_strlen(map[0])] = 0;
		j = -1;
		while (++j < (int)ft_strlen(map[0]))
			if (map[i][j] == enemy || map[i][j] == enemy + 32)
				res[i][j] = 1;
			else if (map[i][j] == player || map[i][j] == player + 32)
				res[i][j] = -2;
			else
				res[i][j] = -1;
	}
	res[count_i] = 0;
	return (res);
}

int		side_check(int **res, int i, int j, int count)
{
	if (res[i][j + 1] && res[i][j + 1] == count)
		return (1);
	else if (j != 0 && res[i][j - 1] && res[i][j - 1] == count)
		return (1);
	if (i != 0)
	{
		if (j != 0 && i != 0 && res[i - 1][j - 1] && res[i - 1][j - 1] == count)
			return (1);
		else if (i != 0 && res[i - 1][j] && res[i - 1][j] == count)
			return (1);
		else if (i != 0 && res[i - 1][j + 1] && res[i - 1][j + 1] == count)
			return (1);
	}
	if (res[i + 1])
	{
		if (j != 0 && res[i + 1][j - 1] && res[i + 1][j - 1] == count)
			return (1);
		else if (res[i + 1][j] && res[i + 1][j] == count)
			return (1);
		else if (res[i + 1][j + 1] && res[i + 1][j + 1] == count)
			return (1);
	}
	return (0);
}

int		filler_map_apply(int **res, int count)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (res[i])
	{
		j = 0;
		while (res[i][j])
		{
			if (res[i][j] == -1)
				if (side_check(res, i, j, count) == 1)
				{
					res[i][j] = count + 1;
					check = 1;
				}
			++j;
		}
		++i;
	}
	return (check);
}

int		**map_apply(char player, char enemy, char **map)
{
	int	**res;
	int	count;

	res = create_arr(player, enemy, map);
	count = 1;
	while (filler_map_apply(res, count) == 1)
		++count;
	return (res);
}
