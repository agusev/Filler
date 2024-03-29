/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:45:07 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_arr(int height, int width)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (height + 1));
	i = 0;
	while (i < height)
		arr[i++] = (char *)malloc(sizeof(char) * (width + 1));
	arr[i] = NULL;
	return (arr);
}
