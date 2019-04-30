/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:39:51 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	z;
	int	find_size;

	i = 0;
	z = 0;
	find_size = 0;
	while (needle[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (needle[z] == haystack[i + z])
		{
			if (z == find_size - 1)
				return ((char *)(haystack + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
