/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:05:18 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 17:05:18 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = -1;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
