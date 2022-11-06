/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:42:45 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/19 20:03:08 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strchr() function locates the first occurrence of c
 * (converted to a char) in the string pointed to by s.
 * The terminating null character is considered to be part of the string;
 * Therefore if c is ‘\0’, the functions locate the terminating ‘\0’
 *
 * The functions strchr() return a pointer to the located character,
 * or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}
