/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:50:39 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 13:41:42 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a substring from the string 's'
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * - Parameters:
 * s: The string from which to create the substring.
 * start: The start index of the substring in the string 's'.
 * len: The maximum length of the substring.
 *
 * - Returned value:
 * The substring.
 * NULL if the allocation fails.
**/

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (len == 0)
		res[0] = '\0';
	else
		ft_strlcpy(res, s + start, len + 1);
	return (res);
}
