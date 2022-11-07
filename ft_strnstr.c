/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:30:17 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/07 00:54:41 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters are
 * searched.  Characters that appear after a ‘\0’ character are not searched.
 * Since the strnstr() function is a FreeBSD specific API, it should only be
 * used when portability is not a concern.
 *
 * - Return value:
 * If needle is an empty string, haystack is returned; if needle occurs
 * nowhere in haystack, NULL is returned; otherwise a pointer to the first
 * character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
