/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:57:52 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/26 12:57:53 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		i;
	size_t		j;

	len_dst = 0;
	while (dest[len_dst] != '\0')
		len_dst++;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dst)
		return (size + len_src);
	size = size - (len_dst + 1);
	i = 0;
	j = len_dst;
	while ((size > 0) && (src[i] != '\0'))
	{
		dest[j] = src[i];
		i++;
		j++;
		size--;
	}
	dest[j] = '\0';
	return (len_dst + len_src);
}
