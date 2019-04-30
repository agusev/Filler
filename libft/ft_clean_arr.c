/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:45:44 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_clean_arr(char ***argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(*argv)[i])
		return ;
	while ((*argv)[i])
		i++;
	while (j < i)
	{
		free((*argv)[j]);
		j++;
	}
	free(*argv);
}
