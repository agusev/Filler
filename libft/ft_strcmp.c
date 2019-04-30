/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:48:52 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	char	*str1;
	char	*str2;

	str1 = (char*)s1;
	str2 = (char*)s2;
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
