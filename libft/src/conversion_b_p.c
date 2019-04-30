/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_b_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:41:09 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*conversion_p(va_list arg)
{
	char		*answer;
	intmax_t	tmp;

	answer = ft_strnew(1);
	tmp = va_arg(arg, unsigned long);
	answer = ft_update(answer, ft_itoa_base(tmp, 16));
	answer = ft_update(answer, ft_strjoin("0x", answer));
	return (answer);
}

char	*conversion_b(va_list arg, t_arg *data)
{
	char		*answer;
	intmax_t	tmp;

	answer = ft_strnew(1);
	tmp = va_arg(arg, uintmax_t);
	if (!ft_strcmp(data->format, "ll"))
		tmp = (unsigned long long int)tmp;
	else if (!ft_strcmp(data->format, "l"))
		tmp = (unsigned long int)tmp;
	else if (!ft_strcmp(data->format, "hh"))
		tmp = (unsigned char)tmp;
	else if (!ft_strcmp(data->format, "h"))
		tmp = (unsigned short int)tmp;
	else if (!ft_strcmp(data->format, "j"))
		tmp = (uintmax_t)tmp;
	else if (!ft_strcmp(data->format, "z"))
		tmp = (size_t)tmp;
	else
		tmp = (unsigned int)tmp;
	answer = ft_update(answer, ft_itoa_base_unsigned(tmp, 2));
	if (data->hashtag == 1 && tmp != 0)
		answer = ft_update(answer, ft_strjoin("0x", answer));
	return (answer);
}
