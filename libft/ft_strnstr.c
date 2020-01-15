/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:59:10 by ychahbar          #+#    #+#             */
/*   Updated: 2018/07/05 14:26:23 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	size_t					j;
	unsigned const char		*str1;
	unsigned const char		*str2;

	j = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	if (!(*str2))
		return ((char *)str1);
	while (*str1 && j < n)
	{
		i = 0;
		while (str1[i] == str2[i])
		{
			if (j + i == n)
				return (NULL);
			if (str2[++i] == '\0')
				return ((char *)str1);
		}
		str1++;
		j++;
	}
	return (NULL);
}
