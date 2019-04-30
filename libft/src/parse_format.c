/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:37:36 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	parse_format(const char *s, int *i, t_arg *data)
{
	char	*tmp;
	char	*tmp1;
	int		j;

	tmp = ft_strnew(1);
	tmp1 = ft_strnew(1);
	j = 0;
	while (j < 2)
	{
		if (s[j] == 'h' || s[j] == 'l' || s[j] == 'j' || s[j] == 'z')
		{
			tmp1 = ft_update(tmp1, ft_makestr(s[j]));
			tmp = ft_update(tmp, ft_strjoin(tmp, tmp1));
			(*i)++;
		}
		j++;
	}
	data->format = ft_update(data->format, ft_strjoin(data->format, tmp));
	ft_strdel(&tmp);
	ft_strdel(&tmp1);
}
