/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:43:56 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	width_child(char **str, char *extra, t_arg *data)
{
	if (data->zero_pending == 1 && (*str[0] == '+' || *str[0] == '-'))
		*str = ft_update(*str, ft_strsub(*str, 1, ft_strlen(*str) - 1));
	if (data->right_pending == 1)
		*str = ft_update(*str, ft_strjoin(*str, extra));
	if (data->right_pending == 0)
		*str = ft_update(*str, ft_strjoin(extra, *str));
	if (data->zero_pending == 1 && data->minus == 1)
		*str = ft_update(*str, ft_strjoin("-", *str));
	else if (data->zero_pending == 1 && data->plus == 1)
		*str = ft_update(*str, ft_strjoin("+", *str));
}

char	*adding_width(t_arg *data, char *str)
{
	char	fill;
	char	*extra;
	int		killme;

	killme = 0;
	if (str[0] == '\0' && ft_strlen(str) == 1)
		killme = -1;
	if (data->width <= (int)ft_strlen(str))
		return (str);
	fill = ' ';
	if (data->zero_pending == 1 && data->precision == 0 && data->type != 's' &&
	data->type != 'c' && data->type != 'C' && data->type != 'S'
	&& data->type != 'p')
		fill = '0';
	if ((data->type != 'x' || data->type != 'X') &&
	data->zero_pending == 1 && data->hashtag == 1)
	{
		extra = ft_bchar(data->width - (int)ft_strlen(str) - 2, fill);
		extra = ft_update(extra, ft_strjoin("0x", extra));
	}
	else
		extra = ft_bchar(data->width - (int)ft_strlen(str) + killme, fill);
	width_child(&str, extra, data);
	free(extra);
	return (str);
}
