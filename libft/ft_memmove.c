/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:57:08 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/26 13:11:01 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)src;
	if (d <= s)
		ft_strncpy(d, s, len);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	return (d);
}
