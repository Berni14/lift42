/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:13:21 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 17:13:21 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size <= dest_length)
		return (size + src_length);
	i = 0;
	while (src[i] && (dest_length + i) < (size - 1))
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (dest_length + src_length);
}
