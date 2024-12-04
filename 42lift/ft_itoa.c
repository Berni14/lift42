/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:26:37 by mbernier          #+#    #+#             */
/*   Updated: 2024/12/03 16:26:37 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(long n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = (long)n;
	len = len_int(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nl < 0)
	{
		str[0] = '-';
		nl *= -1;
	}
	str[len] = '\0';
	len--;
	str[len] = (nl % 10) + '0';
	nl /= 10;
	while (nl != 0)
	{
		str[--len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}

static size_t	len_int(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len += 1;
	while (n != 0)
	{
		len += 1;
		n /= 10;
	}
	return (len);
}
