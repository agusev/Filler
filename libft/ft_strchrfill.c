/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrfill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:57:58 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrfill(int len, char symbol)
{
	char	*word;
	int		i;

	i = 0;
	if (len == 0)
		return (NULL);
	word = ft_strnew(len);
	while (i < len)
	{
		word[i] = symbol;
		i++;
	}
	return (word);
}
