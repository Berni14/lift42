/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:47:45 by mbernier          #+#    #+#             */
/*   Updated: 2024/12/15 16:27:19 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	if (!s2[0])
		return ((char *)s1);
	s2_len = strlen(s2);
	if (s2_len > len)
		return (NULL);
	i = 0;
	while (s1[i] && i + s2_len <= len)
	{
		if (s1[i] == s2[0])
		{
			if (strncmp(&s1[i], s2, s2_len) == 0)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
