/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:35:34 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		res;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f')
		str++;
	res = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
