/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:59:28 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/26 12:59:29 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *str1;
	const char *str2;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;
		while (*str2 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
