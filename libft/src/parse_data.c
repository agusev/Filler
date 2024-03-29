/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:35:39 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	parse_data_child(const char *s, int *i, t_arg *data)
{
	while (s[*i] == '#' && s[*i + 1] != '\0')
	{
		data->hashtag = 1;
		(*i)++;
	}
	while (s[*i] == '-' && s[*i + 1] != '\0')
	{
		data->right_pending = 1;
		(*i)++;
	}
	while (s[*i] == '+' && s[*i + 1] != '\0')
	{
		data->plus = 1;
		(*i)++;
	}
	while (s[*i] == '0' && s[*i + 1] != '\0')
	{
		data->zero_pending = 1;
		(*i)++;
	}
	while (s[*i] == ' ' && s[*i + 1] != '\0')
	{
		data->space = 1;
		(*i)++;
	}
}

void	parse_data(const char *s, int *i, t_arg *data)
{
	int j;

	j = 0;
	while (j < 5)
	{
		parse_data_child(s, &*i, data);
		j++;
	}
}
