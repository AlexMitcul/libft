/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:09 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/20 20:00:54 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- Description:
 *	Allocates (with malloc(3)) and returns a new string, which is the result
 *	of the concatenation of 's1' and 's2'.
 *
 *	- Parameters:
 *	s1: The prefix string
 *	s2: The suffix string
 *
 *	- Return value:
 *	The new string. NULL if the allocation fails.
**/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		length;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
	{
		res[i++] = *s1;
		s1 += 1;
	}
	while (*s2)
	{
		res[i++] = *s2;
		s2 += 1;
	}
	res[i] = '\0';
	return (res);
}
