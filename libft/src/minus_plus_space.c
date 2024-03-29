/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_plus_space.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:42:48 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*adding_minus(t_arg *data, char *str)
{
	char	*tmp;

	if (data->type != 'd' && data->type != 'i' && \
			data->type != 'D')
	{
		tmp = ft_strdup(str);
		return (tmp);
	}
	tmp = ft_strnew(1);
	tmp = ft_update(tmp, ft_strjoin("-", str));
	return (tmp);
}

char	*adding_plus(t_arg *data, char *str)
{
	char	*tmp;

	if (data->type != 'd' && data->type != 'i' && \
			data->type != 'D')
	{
		tmp = ft_strdup(str);
		return (tmp);
	}
	tmp = ft_strnew(1);
	if (data->minus == 0)
		tmp = ft_update(tmp, ft_strjoin("+", str));
	return (tmp);
}

char	*adding_space(t_arg *data, char *str)
{
	char	*tmp;

	if (data->type != 'd' && data->type != 'i' && \
			data->type != 'D')
	{
		tmp = ft_strdup(str);
		return (tmp);
	}
	tmp = ft_strnew(1);
	if (data->minus == 0)
		tmp = ft_update(tmp, ft_strjoin(" ", str));
	return (tmp);
}
