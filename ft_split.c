/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:11:33 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 14:11:33 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	s_len;
	int		i;

	ret = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !ret)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				s_len = ft_strlen(s);
			else
				s_len = ft_strchr(s, c) - s;
			ret[i++] = ft_substr(s, 0, s_len);
			s += s_len;
		}
	}
	ret[i] = NULL;
	return (ret);
}
