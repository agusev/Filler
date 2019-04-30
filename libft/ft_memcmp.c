/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:25:53 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*si1;
	unsigned char	*si2;
	size_t			i;

	i = 0;
	si1 = (unsigned char*)s1;
	si2 = (unsigned char*)s2;
	while (n--)
	{
		if (si1[i] != si2[i])
			return (si1[i] - si2[i]);
		i++;
	}
	return (0);
}
