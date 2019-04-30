/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_int_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:58:24 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clean_int_arr(int ***map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(map)[i])
		return ;
	while ((*map)[i])
		i++;
	while (j < i)
	{
		free((*map)[j]);
		j++;
	}
	free(*map);
}
