/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:07:42 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 17:07:42 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (s < d)
		while (size-- != 0)
			d[size] = s[size];
	else
		return (ft_memcpy(dest, src, size));
	return (d);
}
