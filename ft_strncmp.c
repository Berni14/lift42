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
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (i < c && str[i] != '\0' && str2[i] != '\0')
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	if (i < c)
		return ((unsigned char)str[i] - (unsigned char)str2[i]);
	return (0);
}
