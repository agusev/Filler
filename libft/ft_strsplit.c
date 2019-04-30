/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 12:52:49 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:25:50 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_wd_count(const char *s, char d)
{
	int			i;
	int			nb;

	i = 0;
	nb = 0;
	while (*s)
	{
		if (*s != d && i == 0)
		{
			i = 1;
			nb++;
		}
		if (*s == d && i == 1)
			i = 0;
		s++;
	}
	return (nb);
}

static int		find_wd_len(const char *s, char d)
{
	int			len;

	len = 0;
	while (*s != '\0' && *s != d)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;
	int			j;
	int			i;

	i = 0;
	if (!s)
		return (0);
	j = find_wd_count(s, c);
	str = (char**)malloc(sizeof(*str) * (find_wd_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (j > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = ft_strsub(s, 0, find_wd_len(s, c));
		if (str[i] == NULL)
			return (NULL);
		s = s + find_wd_len(s, c);
		i++;
		j--;
	}
	str[i] = NULL;
	return (str);
}
