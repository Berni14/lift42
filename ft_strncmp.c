/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:24:18 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 17:24:18 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((str[i] != 0) && (str2 != 0) && (diff == 0) && (i < c))
	{
		diff = ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = ((unsigned char)str[i] - (unsigned char)str2[i]);
	return (diff);
}
