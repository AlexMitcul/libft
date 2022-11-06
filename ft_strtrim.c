/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:04:58 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/20 20:16:55 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a copy of 's1' with the characters
 * specified in 'set' removed from the beginning and the end of the string.
 *
 * - Parameters:
 * s1: The string to be trimmed.
 * set:	the reference set of characters to trim.
 *
 * - Return value:
 * The trimmed string.
 * NULL if the allocation fails.
**/

#include "libft.h"

static int	get_length(char const *s, char const *set)
{
	int	length;
	int	set_occur;
	int	i;

	length = ft_strlen(s);
	set_occur = 0;
	i = 0;
	while (s[i] && ft_strchr(set, (int)s[i]) != NULL)
	{
		i += 1;
		set_occur += 1;
	}
	i = length;
	while (s[i] && ft_strchr(set, (int)s[i]) != NULL)
	{
		i -= 1;
		set_occur += 1;
	}
	return (length - set_occur);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;

	if (!s1 || !set)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (get_length(s1, set) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]) != NULL)
		i += 1;
	ft_strlcpy(res, &s1[i], get_length(s1, set) + 1);
	return (res);
}
