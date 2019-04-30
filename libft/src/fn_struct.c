/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:29:53 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	makezero(t_arg *data)
{
	data->hashtag = 0;
	data->right_pending = 0;
	data->star_precision = 0;
	data->star_width = 0;
	data->minus = 0;
	data->plus = 0;
	data->zero_pending = 0;
	data->space = 0;
	data->width = 0;
	data->precision = 0;
	data->null = 0;
	data->format = ft_strnew(1);
	data->type = 0;
}
